// Check whether the given string is palindrome or not.
// Input : "abcde"
// Output : No
// Input : "abcdcba"
// Output : Yes
#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string str;
    cout << "enter the character you want to check palindrome : " << endl;
    getline(cin,str);
    int n;
    n = str.length();
    bool a;
   
    for (int  i = 0; i <  n/2  ; i++)
    {
        if (str[i] == str[n-i-1])
        {
            a = 1;

           
        }
        else 
        a = 0;
       
    }
    if (a == 1 )
    {
        cout << "sring is palindrome : " << endl;

    }
    else cout << " string is not palindrome : " << endl ;
    
}   
