#include <iostream>
using namespace std;
bool checkPalindrome(char a[] , int n )
{
    int start = 0;

    int end = n -1;
    while (start <= end)
    {
        if (a[start] != a[end])
        {
            return 0 ;

            /* code */
        }
         else
         {
            start++;
            end --;

         }
         return 1;

        
    }
    
}
int getlength(char name[])
{
    int count = 0 ;
    for (int  i = 0; name[i] != '\0'; i++)
    {
        /* code */
        count++;

    }
    return count;

    
}
void reverse( char name[] , int n)
{
    int start = 0;
    int end = n-1;
    while (start < end)
    {
        char temp = name[start];
        name[start] = name[end];
        name[end] = temp;

        ++start;
        --end;


        
    }
    cout << "reverse is " << name;

    

}
int main ()
{
    char name[10];
    cout << " enter your name " << endl;
    cin>> name;
    cout << "your name is " << name << endl ;
    int length = sizeof(name)/sizeof(name[0]);
    cout << "length of string is " << getlength(name) << endl ;
    reverse(name,getlength(name));
    int len = getlength(name) ;
    cout<<"check pallindrome " << checkPalindrome(name, len);




    return 0 ;

}