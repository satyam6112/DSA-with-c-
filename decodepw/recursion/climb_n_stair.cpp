// // Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3
// steps at each leve
#include <iostream>

using namespace std;
int CountWay(int n )

{  
   int count;
     if (n == 0) return 1;
    if(n == 1) return 1;
    if(n ==2 ) return 2;
    count =  CountWay(n-1) + CountWay(n-2) + CountWay(n-3);
    return count;
    

}
int main ()
{
    int n ;
     cout << " enter the of stairs" << endl;
     cin >> n ;
     cout << "total number of way to clear staires is : " << CountWay(n) << endl;

}