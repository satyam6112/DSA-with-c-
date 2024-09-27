#include <iostream>
using namespace std;
int main ()
{
    int arr[5] = {89 ,23,45,53,24};
    int min  = INT16_MAX;
    for (int  i = 0; i < 5; i++)
    {
       if (arr[i] <= min )
       {
         min = arr[i];
         
       }
       
    }
    cout << "minimum number in array is " << min << endl;

    
}