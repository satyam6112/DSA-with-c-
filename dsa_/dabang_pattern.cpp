#include <iostream>
using namespace std ;
int main ()
{
    int n;
    cout<<"enter the nummber of rows : ";
    cin>>n;
    int i =1;
    while (i<=n)
    {
        int j =1;
        while (j<=n-i+1)
        {
            cout<<j;
            j++;

            /* code */
        }
         j=1;
        while (j<=(i-1)*2)
        {
            cout<<"*";
            j++;

            /* code */
        }
        j=n-i+1;
        while (j>=1)
        {
            cout<<j;
            j--;

            /* code */
        }
        
        


        cout<<endl;
        i++;

        
        /* code */
    }
    

}