#include <iostream>
using namespace std;
int selection_sort ( int arr[], int size )
{
    for (int  i = 0; i < size - 1 ; i++)
    {
        int minIndex = i ;
        for (int  j  = i + 1 ; j < size ; j ++)
        {
           if (arr[j] < arr[minIndex])
           {
            minIndex = j ;

            /* code */
           }
           
        }
        swap(arr[minIndex] , arr[i]);
        
    }
    for (int  i = 0; i < size ; i++)
    {
        cout << arr[i] << "\t";

    }
    
    
}
int main ()
{
    int size ;
    

    cout << "enter the size of the array " << endl ;
    cin >> size;
    int arr[size];

   
    cout << " enter the element of the array " << endl;

    for (int  i = 0; i < size ; i++)
    {
        cin >> arr[i];
        }
        selection_sort(arr,size);

       

}