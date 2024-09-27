#include <iostream>
using namespace std;
int main ()
{
    int row ;
    cout<< "enter the number of row " << endl;
    cin >> row;
    int a =5  ;
     
    for ( int  i = 1 ; i <= row ; i++)
    {
         if (i%2 != 0  ){
            a = 1;
         }
         else
         a= 0;

        
        for (int  j   = 1 ; j < i+1   ; j ++)
        {
            cout << a;
            if (a==1)
            {
                a=0;

            }
            else{
                a=1;
                
            }
            

        }
        cout  << endl ;

    }
    

}