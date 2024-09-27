#include <iostream >
using namespace std ;
int main ()
{
    int arr[11 ]; //making an array 
    int n ; //declaring an integer 
    cout << "enter the number to print the table" << endl ;
    cin >> n ; // getting input 
    for (int  i = 0; i <= 10 ; i++)
    {
        arr[i] = n * i ; // giving the value for each element arr[];


        cout   << n << "* " << i << "= " << arr[i] << endl ; //printing the out put  ,'


        /* code */
    }

    
}