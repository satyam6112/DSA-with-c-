#include <iostream>
using namespace std;
 int incertionSort(int  arr[] , int size )
 {
	for (int i = 1 ; i < size ; i++)
	{
		int current = arr[i];
		int j = i-1;
		while (arr[j] > current && j>=0)
		{
			arr[j+1] = arr[j];
			j--;

		}
		arr[j+1 ] = current;

		
	}
	
 }
int main ()
{
	int size ;
	

	cout << "enter the size of array " << endl;
	cin >> size;
	int arr[size];
	cout << "enter the element  of array  " << endl;
	for (int  i = 0; i < size; i++)
	{
		cin >> arr[i];

	}
	incertionSort(arr,size);
	cout << "shorted array is " << endl;
     for (int  i = 0; i < size ; i++)
     {
        cout << arr [ i]  << "\t"; 
        /* code */
     }
	
}