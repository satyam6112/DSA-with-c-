#include <iostream>
using namespace std;
int fibo(int n)
{
    if(n==1 || n ==2) return 1;
    return fibo(n-1) + fibo(n-2);

}

int main ()
{
    int n ;
     cout << " enter the terms " << endl;
     cin >> n ;
     cout << "fibonachi of " <<n <<" term is " << fibo(n) <<  endl;
    

}