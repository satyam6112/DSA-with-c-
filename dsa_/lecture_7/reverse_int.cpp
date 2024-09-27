#include <iostream>
using namespace std ;
int main () 
{
    int n, ans = 0 , digit ; 
    cout << "enter the number ";
     cin >> n ;
     
     {
        /* code */
     }
     
     while (n!= 0)
     {
        digit = n % 10 ;
        ans = ans * 10 + digit ;
        n/=10;

        /* code */
     }
     if (ans< INT32_MAX /10 || ans> INT_FAST32_MIN /10)
     {
        cout<< "reverse of integer is " << 0 ;

     }
     else
    cout << "reverse of the integer is " << ans << endl;

     
}