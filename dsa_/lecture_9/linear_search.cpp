#include <iostream>
using namespace std ;
bool search(int arr[] , int size , int key )
{
    for (int  i = 0; i < size ; i++)
    {
        if (arr[i] == key )

        
        {
            return 1 ;

            /* code */
        }
        
        /* code */
    }

    return 0;

    
    
}
int main ( )
{
    int size , yes ;
    int arr[100];
    cout << " enter the size of the array " << endl ;
    cin >> size;
    cout << " enter the array element :  " << endl ;
    for (int  i = 0; i < size ; i++)
    {
        cout<< "enter " << i << " element of array " << endl ;

        cin >> arr[i];

        /* code */
    }
    cout << "enter the number you have to search in array : " << endl;

    cin >> yes;
    if (search(arr,size,yes)==1)
    {
        cout << yes << " is preasent in array " << endl ;

        /* code */
    }
    else 
    cout<< yes << " is not present in array " << endl ;

    


    
}