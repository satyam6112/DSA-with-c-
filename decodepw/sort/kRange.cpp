#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = { 5 , 3 ,6 };
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    float Kmin = int (INT16_MIN);
    float Kmax = int(INT16_MAX);
    int count = 0 ;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
         if (arr[i] > arr[i+1])
         {
            Kmin = (arr[i] + arr[i+1]) /2.0;

         }
         else
         {
            Kmax = (arr[i] + arr[i+1]) / 2.0;

         }
         
         if (Kmin > Kmax)
         {
            flag = false;
            break;

         }
         
    }

    if (flag == false)
    {
        return -1;
    }
    else
    {
        cout << "k range in between " << Kmin <<" , " << Kmax << endl;

    }
    
}