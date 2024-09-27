#include <iostream>
#include<vector>
using namespace std;
int main() 
{
    vector<int>v;
        v.push_back(1);
        v.push_back(3);
        v.push_back(12);
        v.push_back(13);
        v.push_back(4); 
        int x = 12;
        for (int  i = v.size() - 1 ; i  >= 0 ; i--)
        {
            if (v[i] == x)
            {
                cout << x  << " present in :  " << i << " index " <<endl;
                break;
                            }
            
        }
        



}