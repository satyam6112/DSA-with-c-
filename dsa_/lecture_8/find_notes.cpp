#include <iostream > 
using namespace std ;
 int main ()
 {
    int n ;
    cout << " enter the rupees you have ";
    cin >> n ;
    int notes ;
    cin  >> notes;

    switch (notes)
    {
    case 100:
                cout << "total notes of 100 is " << n/100 << endl ;

        n = n - (n/100)*100 ;
          case 50:
                cout << "total notes of 50 is " << n/50 << endl  ;

        n = n - (n/50)*50 ;
          case 20:
                cout << "total notes of 20 is " << n/20 << endl ;

        n = n - (n/20)*20 ;
          case 10:
                cout << "total notes of 10 is " << n/10 << endl  ;

        n = n - (n/10)*10 ;
          case 1:
                cout << "total notes of 1 is " << n/1 << endl  ;

        n = n - (n/1)*1 ;
         


    
    default:
    cout << "thamk you " << endl ;
            break;
    }

 }