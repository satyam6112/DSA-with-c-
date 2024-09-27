#include <iostream>
#include <vector>
using namespace std;

void input(vector <vector<int>> & arr , int n , int m )
{
    for (int  i = 0; i < n ; i++)
    {
        for (int j = 0; j < m ; j++)
        {
            cin >> arr[i][j];

        }
        
    }
    
}

void display(const vector<vector<int>>& arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void  transpose(vector<vector<int>> &arr , int n, int m )

{
    //vector <int>res;
    for (int j = 0; j  < m ; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i][j] << " ";

        }
        cout << endl;

        
    }
    return;

    

}

void tran(vector<vector<int>>&arr, int n , int m)
{
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = i+1; j < m ; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;

            
        }
        
    }
    return;

    

}
int main()
{
    int row, col;
    cout << "Enter the number of rows: " << endl;
    cin >> row;
    cout << "Enter the number of columns: " << endl;
    cin >> col;

    //vector<vector<int>>arr(row,vector<int>(col) );
    vector<vector<int>> arr(row, vector<int>(col));

    cout << "Enter the elements of the array:" << endl;
    input(arr, row, col);
    
    cout << "The array is:" << endl;
    display(arr, row, col);
    // cout << "transpose of this matrix is :  " << endl;
    //  transpose(arr ,row,col );
    cout << "transpose of given matrix using same array" << endl;
    tran(arr,row,col);
    display(arr, row, col);

    

    return 0;
}
