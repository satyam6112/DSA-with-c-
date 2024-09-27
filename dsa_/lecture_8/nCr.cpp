#include <iostream>
using namespace std ;
int fact ( int n )
{
    int a =1;
    for (int i = 1; i <= n ; i++)
    {
        a = a * i ;

        /* code */
    }
    return  a ;

    
}
int nCr (int x , int y )
{
    int o = fact (x);
    int p = fact(y) * ( fact( x -y ));
    return o/p;

}
int main ()
{
    int a ,b;
    cout << "enter the value of a & b ";
    cin >> a >> b ;
    cout << "nCr of a nad b is " << nCr(a,b);

    }