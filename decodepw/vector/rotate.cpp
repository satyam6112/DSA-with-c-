#include <iostream>
#include <vector>
using namespace std;
void display (vector <int> & v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t" ;
    }
    
}
void reverse (int i , int j , vector<int>& v)
{
   

    while (i<=j)
    {
        int temp = v[i];

        v[i] = v[j];
        v[j] = temp;
        i++;
         j--;



    }
    return;
    

}
int main ()
{
    vector<int> v;
    v.push_back(12);
    v.push_back(1);
    v.push_back(22);
    v.push_back(52);
    v.push_back(62);
    v.push_back(72);
    display(v);
    cout << endl;

    int i =0  , j = v.size() - 1 ;
    int k = 20;
    int n = v.size();
    if (k > n)
    {
        k = k %n;

    }
    
     reverse(0, n-k-1 , v);
     reverse(n-k,n-1,v);
     reverse(0,n-1 ,v);
     display(v);





}