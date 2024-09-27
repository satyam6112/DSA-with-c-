#include <iostream>
#include <algorithm>
using namespace std ;
bool ifPossible (int arr[] , int size , int cow , int mid ) 
{
    int cowCount = 1 ;
    int lastPosi = arr[0];
    for (int  i = 0; i < size ; i++)
    {
       if (arr[i] - lastPosi >= mid )
       {
        cowCount++;
        if ( cowCount  == cow )
        {
            return true;

        }
        lastPosi = arr[i] ;

        
       }
       
    }

    return false ;

    }

int findMaxDistance (int arr[ ] , int size ,int cow )
{
    
    sort( arr, arr + size );
    int start = 0 ;

    int end = arr[size - 1 ] - arr[0] ;
    int ans = -1;
    while (start <= end )
    {
        int mid = start + (end - start ) / 2 ;
        if (ifPossible(arr , size , cow , mid ))
        {
            ans = mid ;
            start = mid +1 ;

        }
        else {

            end  = mid - 1 ;

        }
        
       
    }

    
    return ans ;

    
}
int main ()
{
    int size , cow ;
    cout<< "enter the size of the array " << endl;
    cin >> size;
    int arr[size];
    for (int  i = 0; i < size ; i++)
    {
        cin >> arr[i];

        /* code */
    }
    cout << "enter the number of cows " << endl ;
    cin >> cow ;

     cout << "Maximum distance between two cows without hurting them is: " << findMaxDistance(arr, size, cow ) << endl ;

    
}