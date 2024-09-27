#include <iostream>
using namespace std ;
int find_first(int arr[] , int size , int key )
{
    int ans = -1  ;
    int mid;
    int start = 0;
    int end = size - 1 ;
    while (start <= end )
    {
        mid = start+(end-start) /2;
        if (arr [mid] == key )
        {
            ans = mid ;
            end = mid -1 ;

            /* code */
        }
       else if( arr[mid] > key )
        {
            end = mid  - 1 ;

            /* code */
        }
        else if (arr[mid] < key ) {
            start = mid +1 ;

        }

        
         
        /* code */
    }
    return ans;

     
}



int find_second(int arr[] , int size , int key )
{
    int ans = -1  ;
    int mid;
    int start = 0;
    int end = size - 1 ;
    while (start <= end )
    {
        mid = start+(end-start) /2;
        if (arr [mid] == key )
        {
            ans = mid;
            start = mid + 1  ;

            
        }
       else if( arr[mid] > key )
        {
            end = mid  - 1 ;

            /* code */
        }
        else if (arr[mid] < key ) {
            start = mid +1 ;

        }

        
         
        /* code */
    }
    return ans;
    
     
}


int main ( ) 
{
    int a[] = {1,2,3,3,3,4,5};
    //  taking a shorted array and we have to find 3 first and last occurence
    int size = sizeof(a) / sizeof(a[0]) ;
    int key = 3;
    cout << "the first occurence of 3 is at index " << "  " << find_first(a,size,key) << endl ;
    cout << "the second occurence of 3 is at index " << "  " << find_second(a,size,key) << endl ;

    // to find the total  number of occurence of key in given array.

    cout << "total number of occurence of 3 in given array is " << find_second(a,size,key) - find_first(a,size,key) + 1 ;




}