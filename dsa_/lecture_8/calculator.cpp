#include <iostream> 
using namespace std ;
int main ( ) 
{
    int a,b;
    cout<< "enter the value of a  " << endl ;
    cin>>a;
    cout << "enter the value of b " << endl ;
    cin >> b ;
    char opp ;
    cin >> opp ;

    switch (opp)
    {
    case '+':
        /* code */
        cout << a << "+" << b <<"="<<a+b;

        break;
        case '-':
        /* code */
        cout << a << "-" << b <<"="<<a-b;

        break;
        case '*':
        /* code */
        cout << a << "*" << b <<"="<<a*b;

        break;
        case '/':
        /* code */
        cout << a << "/" << b <<"="<<a/b;

        break;
        case '%':
        /* code */
        cout << a << "%" << b <<"="<<a%b;

        break;
    
    default:
    cout << "please enter valid operatour ";
    
        break;
    }
}