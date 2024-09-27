#include <iostream>
using namespace std;
int main ()
{
    int arr[10];
    cout << "enter   numbers  " << endl;
    for (int  i = 0; i < 3; i++)
    {
        cin >> arr[i];

    }
    for (int  i = 0; i < 3; i++)
    {
        cout << arr[i] << "\t ";
        
    }
    int product = 1  ;
    for (int  i = 0; i < 3; i++)
    {
        product = product*arr[i];

        
    }
    cout << endl<< "product of all numbers in array is : " << product ;
    
    
    
}