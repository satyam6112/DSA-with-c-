#include <iostream>
#include <math.h>

using namespace std ;
int main ()
{
    int n ;
    cout<< "enter the number ";
    cin >> n ;
    int ans =0 ;
    int i = 0;
    while (n!=0)
    {
        int bit = n % 10 ;
        if (bit == 1 )
        {
            ans=ans+bit * pow( 2  , i);

            /* code */
        }
        n= n / 10 ;

        i++;
         

        
        /* code */
    }
    cout<< "answer is " << ans << endl ;
    
    


    }