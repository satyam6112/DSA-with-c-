#include <iostream>
using namespace std;
int fab(int a)
{
    if ( a==0 || a==1)
    {
        return a;

    }
    else
    {
        return fab (a-1) + fab (a-2) ;

    }
    
    
}
int main ()
{
    int n , a = 0 , b = 1 ;
    cout<<"enter the number you want fibonacci series of ";
    cin>>n;
    cout<<a << "\t "<< b << "\t ";
    for (int  i = 1; i < n; i++)
    {
        int fib = a+b;
        cout<<fib << "\t ";
        a=b;
        b=fib;


        /* code */
    }
    cout<<endl;

    cout<<"the fibonacci series of n is "  << fab(n);
}