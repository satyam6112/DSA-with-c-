#include <iostream>
using namespace std ;

int main ()
{
    int row , i, j , col;
    cout << "enter the number of row " <<endl;
    cin >> row;
   
    for ( i = 1 ; i <= row ; i++)
    {
        for ( j=1 ; j <= row ; j++)
        {
         if (i == j || i+j == row+1 )
         {
            cout<< " *";

         }
         else
         cout << " ";


        }
        cout<<endl;
        
        
    }
    
}