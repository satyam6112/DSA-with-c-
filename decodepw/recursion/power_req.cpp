#include <iostream>
using namespace std;
int pow(int x , int n)
{
    int ans  = 0; // for storing my function call in a variable we reduce functin call by half number of times o(n) = log2 n is T.C
    if(n == 0 ) return 1;
     ans = pow(x,n/2);
    if (n % 2 == 0 ) return ans * ans;
    else return ans * ans * x ;

    
}

int main ()
{
    int x , n  ;
    cout<< "enter the number (bash ) form " << endl;
    
     cin >> x ;
     cout << "enter the power number " << endl;
     cin >> n;
     cout << "power " <<x <<" to power  " << n << " is " << pow(x,n) << endl;
    

}