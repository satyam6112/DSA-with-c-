#include <iostream> 
using namespace std ;
int Maxvalue (int num[], int n) 
{
    int max = INT32_MIN;
    for (int  i = 0; i < n ; i++)
    {
        if (num[i] > max )
        {
            max = num[i];

            /* code */
        }
        
        /* code */
    }
    return max ;

    
}

int Minvalue (int num[], int n) 
{
    int min = INT32_MAX;
    for (int  i = 0; i < n ; i++)
    {
        if (num[i] < min )
        {
            min = num[i];

            /* code */
        }
        
        /* code */
    }
    return min;

    
}

    

int main ()
{
    int size;
    cout << "enter the size of array ";
    cin >> size;
        int num [ 100];
    cout << "enter the eleent of array ";

    for (int  i = 0; i < size; i++)
    {
        cin >> num[i];


        /* code */
    }
    cout << "maximum elemnt in arry is " << Maxvalue(num ,size) << endl ;
    cout << "minimum elemnt in arry is " << Minvalue(num ,size) << endl ;

    

}
