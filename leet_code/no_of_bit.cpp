#include <iostream>
using namespace std;
int main ()
{
    int n , count = 0 ;
    cout << " enter the number " << endl ;
    cin >> n;
    while (n!=0)
    {
        if (n&1)
        {
            count++;

            /* code */
        }
       n =  n>>1; //right shift to search bits



        
        /* code */
    }
    cout<< count << endl ;

    
 }