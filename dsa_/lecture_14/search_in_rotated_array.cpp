#include <iostream>
using namespace std ;
int binary_search(int a[] , int size , int key ,int start , int end )
{
    int mid  ;
    
    
    while ( start <= end )
    {
        mid =  start + (end - start ) / 2 ;

        if (a[mid] == key )
        {
            return mid ;

        }
        else if (a[mid] < key )
        {
            start = mid + 1;



            
        }
        else if (a[mid ] > key ) 
        {
            end = mid -1 ;
        
        
    }
    

    

}
return -1;

}

int pivot_find(int a[] , int size )
{
    int start , end ;
    start = 0;
    end = size -1 ;

    while (start < end )
    {
        int mid = start +(end - start ) /2;

        if (a[mid] > a[end])
        {
            start = mid +1 ;

            /* code */
        }
        else {
            end = mid ;
            
        }
       

        
        /* code */
    }
     return start;
    
}

int main  ()
{
    int arr [] = {13,15,3,5,7,9,11};

    int size = sizeof(arr) /sizeof(arr[0]);

    int key ;
    cout << "enter the key element you find in array " << endl ;
    cin >> key ;
     cout << "pivot = " << pivot_find(arr,size) << endl;

  int   pivot = pivot_find(arr, size);
  
    int binary_left = binary_search(arr,size,key,0,pivot-1);
   int binary_right = binary_search(arr,size,key,pivot,size-1);

   if (binary_left != -1 )
   {
    cout << "the key present at index " << binary_left << endl ;

    /* code */
   }
     if (binary_right  != -1 )
   {
    cout << "the key present at index " << binary_right << endl ;
    
    /* code */
   }
   else if (binary_left == -1 && binary_right == -1 )
   cout<<"key is not present in this array : " << endl;
    
   
 


}
     
