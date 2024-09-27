#include <iostream>
using namespace std ;
int sum (int num[] ,int n )
{
    int ans = 0 ;
    for (int  i = 0; i < n; i++)
    {
        ans = ans + num[i];

        /* code */
    }
    return ans ;

    


}
int main ( ) 
{
   
    
    
    int num[100];
    int size ;
    
    cout << " enter the size of the array " << endl ;
    cin >> size;

     //int size  = sizeof(num) / sizeof(num[0]);
     cout << " enter the array elements ";


    for (int  i = 0; i < size; i++)
    {
        cin >> num[i];

        /* code */
    }
     cout << "sum of element of array is " << sum(num , size) << endl ;
     
}