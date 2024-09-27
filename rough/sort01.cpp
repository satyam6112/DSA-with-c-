#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v(n);
    
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
     for(int i = 0 ; i < n -1 ; i++)
        {
            int min = INT_MAX;
            int min_idx = -1;
            for(int j = i ; j < n ; j++ )
            {
                if(v[j] < min)
                {
                     min = v[j];
                    min_idx = j;
                }
            }
            swap(v[i] , v[min_idx]);
        }
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    return 0;
}
