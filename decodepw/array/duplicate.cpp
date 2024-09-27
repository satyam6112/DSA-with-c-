#include <iostream>
using namespace std;
int main ()
{
 
    int arr[5] = {89 ,23,45,24,24};
    bool flag = false;
    for (int  i = 0; i < 5 ; i++)
    {
        for (int j = i+1 ; j < 5 ; j++)
        {
            if(arr[i] == arr[j])
            {
                flag = true;
                break;

            } 

        }
        
    }
    if (flag == true)
    {
       cout << "duplicate is present in array " << endl ;

    }
    else
    cout << "duplicate not present in array " << endl ;

    
    


}