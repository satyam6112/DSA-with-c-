#include <iostream>
using namespace std ;
bool prime (int n )
{
    for (int  i = 2 ; i <= n ; i++)
    {
        if (n  % i == 0) 
{
return 0 ;
}
else
 return 1;

    }
    
    
}
int main ( )
{
    int n ;
    cout<< "enter the number :";
    cin >> n;
    if (prime(n)== 1)
    {
        cout << "not prime number "<< endl;

        /* code */
    }
    else 
    cout<< "prime number " << endl ;

    

}