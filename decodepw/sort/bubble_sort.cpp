#include <iostream>
#include <vector>
using namespace std;
vector<int> bubble( vector <int> &v , int s)
{
    int i = 0;
    
    for (int i = 0; i < s ; i++)
    {
        for (int  j = 0; j < s ; j++)
        {
            if (v[j] > v[j+1])
        {
            int temp = v[j];
            v[j] = v[j+1];
            v[j+1] = temp;
        }
        else break;
        
        
        }
        s--;
        
    }
    
     return v;

     
    

}
int main ()
{
    int n ;
    cin >> n;
    vector <int> v(n);
    cout << "enter the element of vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    bubble(v,n);
    cout << "sorted arry using bubble sort is : " << endl ;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "  ";
    }
    return 0;

    
}