#include <iostream>
using namespace std ;

int main ()
{
    int row , i, j , col;
    cout << "enter the number of row " <<endl;
    cin >> row;
    cout << "enter the number of column " << endl;
    cin >> col;
    for ( i = 1 ; i <= row ; i++)
    {
        for ( j=1 ; j <= row +1-i ; j++)
        {
            cout<<"*";

        }
        cout<<endl;
        
        
    }
    
}