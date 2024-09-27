#include <iostream>
using namespace std;
int main ()
{
    int row;
    cout << " enter the number of rows : " << endl ;
    cin >> row;
    int i = 1 ;
    while (i <= row )
    {
        int j = 1;
        while (j<= row -i+1)
        {
            cout <<  j << "\t";
            j++ ;

            /* code */
        }
        j = 1;
        while (j < (i - 1) * 2 )
        {
            cout << "*" << "\t";
            j++;

            /* code */
        }
        j = row - i + 1 ;
        while (j >= 1  )
        {
            cout << j << "\t" ;
            j--;


            /* code */
        }

        
         cout << endl ;
    i++;
        
        /* code */
    }
   

    
}