#include <iostream>
#include <algorithm> // Added for std::sort
using namespace std;

bool ispossible(int arr[], int size, int k, int mid)
{
    int cowCount = 1;
    int lastPosi = arr[0];             
    for (int i = 0; i < size; i++) // Start i from 1
    {
        if (arr[i] - lastPosi >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastPosi = arr[i];
        }
    }
    return false;
}

int findMaxDistance(int arr[], int size, int k)
{
    sort(arr, arr + size); // Sort the array in ascending order
    int start = 0;
    int end = arr[size - 1] - arr[0]; // Initialize end with maximum possible distance
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (ispossible(arr, size, k, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int size, painter;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size]; // Define the array after getting its size

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number of cows: ";
    cin >> painter;

    cout << "Maximum distance between two cows without hurting them is: " << findMaxDistance(arr, size, painter) << endl;
}
