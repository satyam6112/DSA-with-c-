#include <iostream>
using namespace std;
int power(int a, int b)
{
    if (b == 0 )
    {
        return 1;
    }
    return a * power(a , b -1);
}

int main()
{
    cout << "enter the number  a and b " << endl;
    int a , b ;
    cin >> a;
    cin >> b;
   cout <<  power(a , b ) << endl ;
    
}