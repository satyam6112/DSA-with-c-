#include <iostream>
using namespace std ;

int main ()
{
    int row , i, j , col;
    cout << "enter the number of row " <<endl;
    cin >> row;
    int mid = (row / 2)+1;
   
    for ( i = 1 ; i <= row ; i++)
    {
        for ( j=1 ; j<= row ; j++)
        {
            if (mid == j || mid == i)
            {
                cout<<"*";
            }
            else
            cout<< " ";
            
            

        }
        cout<<endl;
        
        
    }
    
}