#include  <iostream> 
using namespace std ;
void size(int arr[]){


    int size ;

    for (int i = 0; i < 10  ; i++)
    {
        size = sizeof(arr[i]);

        cout << "the size of " << i << " index is " << arr[i] << endl ;


        /* code */
    }
    
}
int main  ()
{
    int arr[100];

    size(arr);



}