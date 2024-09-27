#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int  i = 0; i < a.size(); i++)
    {
        cout << a[i] << "\t" ;

    }
    cout << endl;

    
}


int main ()
{
    vector<int>a;
    int size , element;
    cout << "enter the size of the vector " << endl;
    cin >>  size;
    for (int  i = 0 ; i < size ; i++)
    {
        cout << "enter the element  of vector" << endl;
        cin >> element ;
        a.push_back(element);

        
    }
    display(a);
     a.pop_back();
    display(a);
    vector<int> :: iterator it = a.begin();
    a.insert(it++,3,6112);
    display(a);
   



    
return 0 ;


}