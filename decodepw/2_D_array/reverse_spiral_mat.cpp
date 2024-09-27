#include <iostream>
using namespace std;
int main ()
{
    int m , n ;
    cout << "enter the rows of 1st matrix" << endl;
    cin >> m;
    cout << "enter the colums  of 1st matrix" << endl;
    cin >> n;
    int arr[m][n] = {0};
    // taking input 
    cout <<"enter the element of matrix :" << endl;
    
       for (int  i = 0; i < m ; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            cin >> arr[i][j];

        }
        
    }

    cout << "reverse spiral printing of given matrix is : " << endl;
    for (int i = m-1 ; i >= 0 ; i--)
    {
        if (i%2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            
        }
        else
        {
            for (int j = n-1 ; j >= 0 ; j--)
            {
                cout << arr[i][j] << " ";
            }
            
        }
        cout << endl;

    }
    
   

}