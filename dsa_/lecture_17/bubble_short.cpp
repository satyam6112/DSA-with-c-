#include <iostream>
using namespace std ;
int bubbleShort (int arr[] , int size )
{
    bool swaped = false;

    for (int  i = 1 ; i < size ; i++)
    {
        for (int  j = 0; j < size - i ; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1 ]);
                swaped= true;

            }
           

        }
         if (swaped == false)
    {
        break;
    }
   

        
    }
   
    
    
    
    
}
int main ()
{
    int size ;
    cout<< " enter the size of the array " << endl;
    cin >> size;
    int arr[size];
    cout << "enter element of the array : " << endl ;
    for (int  i = 0; i < size ; i++)
    {
        cin >> arr[i];

    }

     bubbleShort(arr,size) ;
     cout << "shorted array is " << endl;
     for (int  i = 0; i < size ; i++)
     {
        cout << arr [ i]  << "\t"; 
        /* code */
     }
     



    
}
//----------------------------------------------------------------------------------------------------------------------------------------




