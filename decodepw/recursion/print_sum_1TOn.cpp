#include <iostream>
using namespace std;
void PrintSum (int sum, int n)
{
   
    if (n ==0)
    {
        cout << sum << "\n";
        return ;
    }
   PrintSum(sum+n , n -1);


    
   
}
int main ()
{
    int  n ;
     cout<< "enter the number " << endl;
     cin>> n;
      PrintSum(0,n);

}