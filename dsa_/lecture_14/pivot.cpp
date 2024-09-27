#include <iostream>
using namespace std;
int pivot(int arr[] , int size )
{
    int mid , start , end ;
    start = 0 ;
    end = size - 1 ;
    while (start < end )
    {
        mid = start + (end - start )/2 ;

       if (arr[mid ] > arr[end]) 
       {
        start = mid + 1 ;

       }
       else{
        end = mid;

       }
       
    }
    return start ;

    
}
int main ()
{
    int arr[] = {7,9,1,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "the pivoted element of array present in " << pivot ( arr,size) << " index" << endl ;



}