#include <iostream>
using namespace std ;
int find_peek(int a[] , int size ) 
{
    int mid ,start , end ;
    start = 0 ;
    end = size - 1 ;
    while (start < end )
    {
        mid = start + (end - start ) /2 ;
        if (a[mid] < a[mid + 1])
        {

            start = mid + 1 ;

        }
        else
        {
            end = mid  ;

            
        }
        
        
    }
    return start;

}
int main ()
{
    int arr[] = { 1,2,3,4,9,8,7,6};
     
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "the peek element in this given array is " << find_peek(arr,size) << endl ;


}