#include <iostream>
#include <math.h>

using namespace std ;
int bit_convertour (int j )
{
    int ans = 0;
    int i = 0;

    while (j!=0)
    {
        int bit = j&1;
        ans = ans + bit * pow (10 ,i);

        i++;
        j = j  >>  1  ;


        /* code */
    }
    return ans ;

    
}
int bit_conter (int num)
{
    num = bit_conter (num);
    int ans =0 ;
    while (num != 0 )
    {
        int digit = num % 10 ;
        if (digit == 1 )
        {
           ans = ans +digit;

        }
        num /= 10;

        
        
        

        
    }
    return ans ;

    
}
int main ()
{
    int a , b ;
    cout << "enter the number a :: " << endl ;
    cin>> a ;
    cout << "enter the number b :: " << endl ;
    cin>> b ;
    cout << "the sum of bit set of a & b is " << bit_conter(a) + bit_conter(b);



}
