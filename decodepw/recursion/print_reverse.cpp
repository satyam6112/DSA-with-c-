// Print all the elements of an array in reverse orde

#include <iostream>
#include <vector> 
using namespace std;

void printRevrse(vector<int> &arr, int n)
{
    if(n < 0) return;
    cout << arr[n] << " ";
    printRevrse(arr,  n-1);

   
}
int main()
{
    int n ;
  cout << " enter the number " << endl ;
  cin >> n;
  vector <int> arr(n);
  for (int i = 0; i <n; ++i)
  {
    cin >> arr[i] ;
  }
  
  int currIndex = 0;
  printRevrse(arr ,  n);
    return 0;
}
