#include <iostream>
using namespace std ;
bool iseven ( int n )
{
    if (n &1)
    {
        return 0 ;

        /* code */
    }
    else 
     return 1 ;

    

}
int main ( )
{
 int n ;
 cout << "enter the number " ;
 cin >> n ;
 if (iseven(n)==1)
 {
    cout<<"even";

    /* code */
 }
 else
 cout<<"odd";
 
 
 



}