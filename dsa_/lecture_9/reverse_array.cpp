#include <iostream>
using namespace std ;
void reverse (int arr [] , int n){
    int start = 0 ;
    int end = n-1;
    while (start <= end )
    {
        swap(arr[start],arr[end]);
        start++;
        end--;

        /* code */
    }
}
    void print(int arr[],int n)
    {
        for (int i = 0; i < n ; i++)
        {
            cout << arr[i] << " ";

            /* code */
        }
        cout << endl;

        
    }
    

int main ()
{
    int arr[3] ={12,-2 ,1};
    int brr[4] = {12,32,33,-65};
    reverse(arr,3);
    reverse(brr,4);
    print(arr,3);
    print(brr,4);

}


