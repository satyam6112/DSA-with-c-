#include <iostream>
using namespace std;

int find(int a[], int size, int key) {
    int ans = -1;
    int mid, start, end;
    start = 0;
    end = size - 1;
    
    while (start <= end) {
        mid = start + (end - start) / 2;

        if (a[mid] == key) {
            ans = mid;
            end = mid - 1;
        } else if (a[mid] < key) {
            start = mid + 1;
        } else if (a[mid] > key) {
            end = mid - 1;
        }
    }

    return ans;
}

int find_second(int b[], int size, int key) {
    int ans = -1;
    int mid, start, end;
    start = 0;
    end = size - 1;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (b[mid] == key) {
            ans = mid;
            start = mid + 1;
        } else if (b[mid] < key) {
            start = mid + 1;
        } else if (b[mid] > key) {
            end = mid - 1;
        }
    }

    return ans;
}

int main() {
    int arr[] = {0,1,2,3,3,4};
    int size, key;
    
    // Since you know the array size and key from the initialization, there's no need to ask for input here.
    size = sizeof(arr) / sizeof(arr[0]);
    key = 3;
    
    cout << "first occurrence of element is    " << find(arr, size, key) << endl;
    cout << "last occurrence of element is    " << find_second(arr, size, key) << endl;

    // to find total number of occurence of key 



    
    cout  << "total number of occurence of 3 is " << find_second(arr,size,key) - find(arr,size, key) + 1 ;


    return 0;
}
