#include <iostream>
using namespace std ;
void swap (int arr[] , int n )
{
    for (int i = 0; i < n; i+=2)
    {
      if (i + 1 < n)
        {
            swap(arr[i],arr[i+1]);
            /* code */
        }
        

        
        /* code */
    }
    
}
void printarr(int arr[] , int n )
{
    for (int  i = 0; i < n ; i++)
    {
        cout << arr[i] << "   ";

        /* code */
    }
    cout << endl ;

    

}
int main (){
    int arr[] = {12,34,-33,63,663};
    int brr[] = {13,764,88,44,33,64,98,63};
    swap(arr,5);
    swap(brr,8);
    printarr(arr, 5);
    printarr( brr , 8);

}