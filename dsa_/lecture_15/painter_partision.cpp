#include <iostream>
using namespace std;
bool isPossible(int arr[] , int size ,int p , int mid   )
{
    int areaCount = 0;
    int paintercount = 1;
    for (int  i = 0; i < size ; i++)
    {
        if (areaCount + arr[i] <= mid )
        {
            areaCount += arr[i];

        }
        else
        {
            paintercount++;
            if (paintercount > p || arr[i] > mid )
            {
                return false ;

                /* code */
            }
            areaCount = arr[i];
            
            
        }
        
    }
    return true ;

    


}
int findTime(int arr[] , int size , int p)
{
    int start = 0 ;
    int sum = 0;
    for (int  i = 0; i < size; i++)
    {
        sum += arr[i];

    }
    int end = sum;
    int ans = -1 ;
    while (start <= end)
    {
        int mid = start + (end - start ) / 2;
        if (isPossible(arr , size , p , mid ))
        {
            ans = mid ;
            end = mid - 1 ;

        }
        else
        {
            start = mid +  1;

        }
        
        /* code */
    }
    return ans;

    
    
}
int main()
{
    int size ;
    cout << "enter the size of array " << endl;
    cin>> size;
    int arr[size];

    cout << "enter the element of array " << endl ;
    for (int i = 0; i < size ; i++)
    {
        cin >> arr[i];

        /* code */
    }
    int numberOfPainter;
    cout << "enter the number of painter " << endl;
    cin >> numberOfPainter;
    cout << "least painter use to colour area in least time is  " << findTime(arr,size,numberOfPainter)  << endl ;


    
}