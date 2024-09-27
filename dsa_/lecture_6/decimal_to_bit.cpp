// decimal to binary 
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int originalN = n; // Store the original value of 'n'
    int i = 0;
    int ans = 0;
    int multiplies = 1 ;
    if (n>=0)
    {
        /* code */
    
    

    while (n != 0)
    {
    
        
            /* code */
        
        
        int bit = n & 1; 
        cout << bit << endl;

        ans = ans +  ( bit * multiplies);
         
        n = n >> 1;
        multiplies *= 10 ;

        i++;
        
       
    }
    }
    else
    {
        while (n)
        {
            n= n * (-1 ) ;
            int bit = n & 1;
            n= n >> 1 ;
            bit = n & 1;
            n = n>> 1;
            bit = bit + 1 ;
            ?
            ans = ans + (multiplies * bit);
            multiplies = multiplies * 10;

            n = n >> 1;

             
            
        }
        
    }

    cout << "Binary form of " << originalN << " is " << ans << endl;

    return 0;
}
