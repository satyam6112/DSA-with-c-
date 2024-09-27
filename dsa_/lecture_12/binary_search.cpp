#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)

    {
        if (arr[mid] == key)
        {
            return mid;

            /* code */
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;

            /* code */
        }
        else if (arr[mid] > key)
        {
            /* code */
            end = mid - 1;
        }
        else
            return -1;
        mid = (start + end) / 2;
    }
}
int main()
{
    int size1, size2, key1, key2;

    int even[] = {1, 3, 55, 57};
    int odd[] = {12, 24, 36, 48, 60};
    cout << "enter the size of even array " << endl;
    cin >> size1;
    cout << "enter the size of odd array " << endl;
    cin >> size2;
    cout << "enter the element you find in even array " << endl;

    cin >> key1;
    cout << " enter the element you find in odd array " << endl;
    cin >> key2;
    int even_search = binarySearch(even, size1, key1);
    int odd_search = binarySearch(odd, size2, key2);
    cout << key1 << " "
         << "is present in " << even_search << " "
         << "index " << endl;
    cout << key2 << " "
         << "is present in " << odd_search << " "
         << "index " << endl;
}
