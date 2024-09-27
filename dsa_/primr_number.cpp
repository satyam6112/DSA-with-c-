#include <iostream>
using namespace std ;
int main ()
{
    int n;
    cout<< " enter the number you have to check it is prime or not ";
    cin>>n;
    
     if (n==1 || n==2)
        {
             cout<< n << " is   a prime number  " << endl ;
            
            /* code */
        }
    
    for(int i= 2  ; i<n ; i++)

    {
       
       
        
        if (  n % i == 0   )
        
        {
            cout<< n << " is  not  a prime number  " << endl ;
            break;

            
        }
        
    
      
        
        if( n%i != 0)
        {
            cout << n <<  " is   a prime number :: " << endl ;
            break;

        }
        
    }
}