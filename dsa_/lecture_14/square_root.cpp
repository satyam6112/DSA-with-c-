#include <iostream>
using namespace std;
int square_root(int arr[] , int size , int num )
{
    int start , end , mid ;
    start = 0 ;
    end  = size - 1;
    
    while (start < end )
    {
        mid = start +(end - start ) / 2 ;
        if (mid*mid == num )
        {
            return mid ;

        }
        else if (mid*mid > num )
        {

            end = mid -1;

        }
        else if (mid*mid < num )
        {
            int ans = mid ;
            start = mid + 1 ;

            
        }
        
        
        

        
    }
    
}
int main ()
{
   int size ,num ;
   cout << "enter the size of the array " << endl;
   cin >> size;
   cout << "enter the number you want to find square root of " << endl;
   cin >> num;


    int arr[size]  ;

    

   
        cout << " the square root of of given  number is " << square_root(arr,size,num) << endl ;

    

}