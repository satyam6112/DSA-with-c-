#include <iostream>
using namespace std;
int fact(int n )
{
    int ans = 0;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else 
    {
      ans = n * fact(n-1);
    }
    return ans;
    
    

}
int main ()
{
    int n ;
     cout << "enter the number you find factorial of " << endl;
     cin >> n;
    int result = fact(n);
    cout << "factorial of  "<< n <<" is " << result;



}