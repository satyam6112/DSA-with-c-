#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> a(5, 1);
    vector<int> last(a);
    
    cout << "Print last: ";
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(1); // Corrected the push_back function call

    cout << "Updated capacity after push_back: " << v.capacity() << endl;
    
    return 0;
}
