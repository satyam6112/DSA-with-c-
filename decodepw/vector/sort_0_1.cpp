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

void shoort(vector<int>& v)
{
    int noz = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            noz++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i < noz)
        {
            v[i] = 0;
        }
        else
        {
            v[i] = 1;
        }
    }
}

void soort(vector<int>& v)
{
    int i = 0;
    int j = v.size() - 1;
    while (i < j)
    {
        if (v[j] == 1)
        {
            j--;
        }
        else if (v[i] == 0)
        {
            i++;
        }
        else if (v[i] == 1 && v[j] == 0)
        {
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
    }
}

int main()
{
    vector<int> v = {1, 0, 0, 1, 0, 0, 1, 1, 0};
    display(v);
    shoort(v);
    display(v);
    soort(v);
    display(v);
}

