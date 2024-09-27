#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m;
     cout << "enter number of rows " << endl;
    cin >> m;
    vector<vector<int> > arr(m,vector<int>(m));
   
    cout << "enter element of array : "  << endl;
    for (int i = 0; i < m ; i++)
    {
       for (int j = 0; j < m; j++)
       {
          cin >> arr[i][j];

       }
       
    }
    // transpose of given matrix 
     for (int i = 0; i < m ; i++)
    {
       for (int j = 0; j < m; j++)
       {
        if (i <= j)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;

        }
        
       }
    }
    cout << "transpose of this matrix is : " << endl;
    for (int i = 0; i < m ; i++)
    {
       for (int j = 0; j < m; j++)
       {
          cout << arr[i][j] << " " ;


       }
       cout << endl;

       
    }


// rotate given matrix 90 degree anticlock wise 
for (int  j = 0; j < m ; j++)
{
    for (int i = 0; i < m/2 ; i++)
    {
        int temp = arr[i][j];
        arr[i][j] = arr[m-i-1][j];
        arr[m-i-1][j] = temp;

    }
    
   
}
cout << " rotated matrix anticlock wise 90 degree : " << endl;
for (int i = 0; i < m ; i++)
    {
       for (int j = 0; j < m; j++)
       {
          cout << arr[i][j] << " " ;


       }
       cout << endl;

       
    }



}
