#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {12,15,3,2,18};
    vector<int>v(5,0);
    int mindex = -1;
    int x =0;
    for (int i = 0; i < 5 ; i++)
    {
        int mini = INT32_MAX;
        for (int j = 0; j < 5 ; j++)
        {
            if (v[j] == 1 )
            {
                continue;
            }
            else
            {
                if (mini > arr[j])
                {
                    mini = arr[j];
                    mindex = j;
                                    }
                
            }
            
            
        }
        arr[mindex] = x;
        x++;
        v[mindex] = 1;
        
    }
    for(int i = 0 ; i < 5 ; i++)
    {
        cout << arr[i] << " ";
    }
    

}