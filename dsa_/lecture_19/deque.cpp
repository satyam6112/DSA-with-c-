#include <iostream>
#include <deque>
using namespace std;
int main ()
{
    deque<int>d;
    d.push_back(1);
    d.push_front(5);
    for (int  i = 0; i < d.size(); i++)
    {
        cout << "  " << d[i] ;

        /* code */
    }
    cout<< " " << endl;
   

    // d.pop_back();
    //   for (int  i = 0; i < d.size(); i++)
    // {
    //     cout << "  " << d[i];

    //     /* code */
    // }
    // cout << endl;

    // d.pop_front();
    // for (int  i = 0; i < d.size(); i++)
    // {
    //     cout << "  " << d[i];

    //     /* code */
    // }
    


    cout << d.empty() << endl;
    cout << "size before erase "<< d.size() << endl;
    d.erase(d.begin(),d.begin()+1);
    cout << "size after ease " << d.size() << endl;
    


    
}