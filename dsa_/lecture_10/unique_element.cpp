#include <iostream>
using namespace std ;
int unique(int arr[], int n )
{
    int ans = 0;

    for (int i = 0; i < n ; i++)
    {
     ans= ans^arr[i];

        cout << ans << "\t";

        /* code */
    }
    cout<< endl ;


  return ans;

    
    
}
int main ()
{
    
   
   
    int a[]={1,1,2,2,3,8,8,3,-7};
    int b[]= {2,3,1,6,3,6,2, };



    cout << "unique element is " << unique(a,9) << endl ;
    cout << "------------------------------------------------------------------------------------ " << endl ;
    cout << "unique element is " << unique(b,7);





}