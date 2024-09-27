#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the vector: " << endl;
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of the unsorted array: " << endl;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        int min = INT_MAX;
        int minIdx = i;  // Initialize with the current index
        for (int j = i; j < n; j++) {
            if (v[j] < min) {
                min = v[j];
                minIdx = j;
            }
        }
        swap(v[i], v[minIdx]);
    }

    for (int ele : v) {
        cout << ele << " ";
    }

    return 0;
}
