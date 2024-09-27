#include <iostream>
using namespace std;
bool isposible(int arr[], int size, int m, int mid)
{

    int start = 0;
    
    int studeCount = 1;
    int pageSum = 0;
    for (int i = 0; i < size; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studeCount++;
            if (studeCount > m || arr[i] > mid)
            {
                return false;

                /* code */
            }
            //pageSum = arr[i];
        }
    }
    return true;
}
int book_alocation(int arr[], int size, int m)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    int end = sum;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isposible(arr, size, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
int printArray (int arr[] , int size)
{
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];

        /* code */
    }
    
}

int main()
{
   
   

    int size ;
    cout << " enter the size of tae array " << endl ;
    cin >> size;
     int arr[size] ;
     cout << "enter the ellement of the array " << endl ;
     printArray(arr , size ) ;



    int student = 2;
    cout << "minimum number book alocate to student is " << book_alocation(arr, size, student);
}
