#include <iostream>
#include <array>
using namespace std;
int main ()
{
    int basic[3] = {1,2,3};
    array<int,4> a= {1,2,3,4};
    int size_a = a.size();
    int size_b = sizeof(basic)/ sizeof(basic[0]);
    cout << "size of array a is "<<size_a << endl;
    cout << "size of array b  is "<<size_b << endl;
    for (int i = 0; i < size_a ; i++)
    {
        cout<< a[i] << endl;
        cout<< "-------------------------------" << endl;
        cout<< basic[i] << endl;
        cout<< "-------------------------------" << endl;

            }
            cout << " element at second index -->" << a.at(2) << endl;
            cout << "empty or not -->" << a.empty() << endl;
            cout << "first element --> " << a.front()<<endl;
            cout << " last element -->" << a.back()<<endl;

    


}