#include <iostream>
using namespace std;
int main ()
{
    int m , n , p , q;
    cout << "enter the rows of 1st matrix" << endl;
    cin >> m;
    cout << "enter the colums  of 1st matrix" << endl;
    cin >> n;
    cout << "enter the rows of 2nd matrix" << endl ;
    cin >> p;
    cout << "enter the colums  of 2nd matrix" << endl ;
    cin >> q;

    if ( n == p)
    {
       int a[m][n];
       int b[p][q];
    //    input of matrix a 
    cout <<"enter the element of 1st matrix " << endl;

       for (int  i = 0; i < m ; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            cin >> a[i][j];

        }
        
    }
        // input of matrix b 
     cout <<"enter the element of 2nd matrix " << endl;

     for (int  i = 0; i < p ; i++)
    {
        for (int j = 0; j < q ; j++)
        {
            cin >> b[i][j];

        }
        
    }
    // resultant matrix is :
    int res[m][q] = {0};
    for (int i = 0; i < m ; i++)
    {
        for (int j = 0; j < q ; j++)
        {
            res[i][j] = 0;
            for (int  k = 0; k  < p ; k++)
            {
               res[i][j] += a[i][k] * b[k][j];
            }
            
        }
        
    }

    // display of resultant matrix 
    cout << "multiplication of both the matrix is : " << endl ;


      for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    



    }
    else
    {
        cout << "multiplication of matrix is not applicable " ;

    }
    

}