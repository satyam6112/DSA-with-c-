// Write a program to calculate the sum of odd numbers between a and b (both inclusive) using
//  recursion

#include <iostream>
using namespace std;

//  ----------------------------this is iteration method  ----------------------------------
// int sumOdd(int a , int b )
// {
//     int sum = 0;
// for (int i = a; i < b; i++)
// {  if (i % 2 != 0) {
//             sum += i;
//         }
    
// }
// return sum;

    

// }
//  --------------------------------------this is recursive method ---------------------
int SumOdd(int a , int b)
{
    int sum = 0 ;
     if (a > b)
     {
        return 0;
     }
     else if ((a % 2 )!= 0)
     {
         return a+SumOdd(a+1 , b);
     }
     else  return SumOdd(a+1 , b);;
     
     
}
int  main ()
{
    int a , b ;
    cout << " enter the number a and b " << endl ;
    cin >> a;
    cin >> b;
    cout << "sum of odd numbers between a & b is " << SumOdd(a,b) << endl;

}