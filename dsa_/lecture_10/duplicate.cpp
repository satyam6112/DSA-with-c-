#include <iostream>
using namespace std ;
int duplicate(int arr[] , int n )
{
    int ans = 0 ;

    for (int i = 0; i < n ; i++)
    {
        ans = ans ^ arr[i];     // 


      
    }
   // cout << "-----> "<<  ans  << endl;
    for (int  i = 1; i < n ; i++)
    {
        ans = ans ^ i;

        /* code */
    }
    return ans ;

    
    
    

}
int main ()
{ 
    
  

    int a[] = {9,8,2,4,3,5,1,2};
     int size  = sizeof(a) / sizeof(a[0]);
    cout << "duplicate element in given array is  " << duplicate(a,size);

    
}