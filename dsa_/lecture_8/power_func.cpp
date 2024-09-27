#include <iostream>
using namespace std ;
int power (int n ,int m )
{
    int ans =1;

    for (int  i = 0; i < m ; i++)
    {
        ans = ans * n ;

    
    }
    return ans;

    

}
int main ()
{
    int a ,b ;
    cout<< "enter the number a ";
    cin >>a ;
    cout << "enter to the power of a ";
    cin>> b ;
   cout<< a << " to power " << b << " is  " <<  power(a,b);


}