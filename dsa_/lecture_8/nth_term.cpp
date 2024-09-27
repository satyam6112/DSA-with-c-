#include <iostream>
using namespace std ;
int nth ( int a , int b , int d   )
{
    int i = 1  ;
    int e =  b ;


   while (i <= e  )
   {
    b = a + (i -1 ) * d ;
    cout <<  b <<" ";

    i++;

    /* code */
   }
   
    

}
int main ()
{
    int n , a, d;
    cout<< "enter the first term " << endl ;
    cin >> a;
    cout<< "enter the common difference " << endl ;
    cin>>d;
    cout << "enter the number of term ";
    cin >> n ;
    nth(a,n,d);


}