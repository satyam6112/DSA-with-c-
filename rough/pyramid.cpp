#include <iostream>
using namespace std;
int main()
{
    int n , i , k , j ;
    cout << "enter the number of row  " << endl;
    cin>> n;
    int nsp , nst ;
    //nsp = number od space , nst = number of star 
     nsp = n-1;
     nst = 1 ;


    for ( i = 1; i <= n ; i++)
    {
        for ( j = 1; j <= nsp ; j++)
        {
            cout << " ";

        }
        nsp--;
        for ( k  = 1; k <= nst ; k++)
        {
            cout<<"*";

        }
        nst+=2;

        
        cout<< endl;

    }
    
}