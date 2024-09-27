#include <iostream>
#include <vector>
using namespace std;

void display(vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}



void soort(vector<int>& v)
{
    int i = 0;
    int j = v.size() - 1;
    while (i < j)
    {
        if (v[j] > 0)
        {
            j--;
        }
        else if (v[i] <= 0)
        {
            i++;
        }
        else if (v[i] > 0  && v[j] <  0)
        {
           int temp = v[i];
           v[i] = v[j];
           v[j] = temp;
           
            i++;
            j--;
        }
    }
}

int main()
{
    vector<int> v = {-1,1,2,-5,6,-4,5};
    display(v);

    
    soort(v);
    display(v);
}

