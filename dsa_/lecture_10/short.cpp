#include <iostream>
using namespace std;

void short1(int a[], int size) {
    int i = 0, j = size - 1;
    while (i < j) {
        while (a[i] == 0 && i < j) {
            i++;
        }

        while (a[j] == 1 && i < j) {
            j--;
        }

        if (a[i] == 1 && a[j] == 0) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
}

void print1(int b[], int size) {
    for (int i = 0; i < size; i++) {
        cout << b[i] << " ";
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int arr[] = {1, 1, 0, 0, 0, 1 ,1,1,1,0};
    short1(arr, size);
    print1(arr, size);
    return 0;
}
