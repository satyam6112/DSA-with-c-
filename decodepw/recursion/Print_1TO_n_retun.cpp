// Return Type
#include <iostream>
using namespace std;
int sum_return(int n )
{
    if(n == 0) return 0;
    return  n + sum_return(n - 1);
}

int main()
{
    cout << "enter the number " << endl;
    int n;
    cin >> n;
    cout << "sum == " << sum_return(n);
   
}