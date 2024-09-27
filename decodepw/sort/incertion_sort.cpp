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
    
    for (int i = 0; i < n ; i++)
    {
        int j = i;

        while (j >=1 && v[j] < v[j-1])
        {
            swap(v[j] , v[j-1]);
            j--;
            
        }
        
    }
    
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    return 0;
}
