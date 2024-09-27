#include <iostream>
using namespace std;
int triplet (int arr[] ,int size , int find )
{
    int element1;

    for (int   i = 0; i < size ; i++)
    {
        element1 = arr[i];

        for (int  j = i +1 ; j < size ; j++)
        {
            int element2 =arr[j];

            for (int k = j+1; k < size ; k++)
            {
                int element3 = arr[k];

                if ( ( element1 + element2 + element3 ) == find )
                {
                    cout << arr[i] << "  " << arr[j] << "  " << arr[k] << endl;

                    /* code */
                }

                

                /* code */
            }
            
            /* code */
        }
        
        /* code */
    }
    

}
int main ()
{
    int size ;
    cout<< "enter the size of array ";
    cin >> size;
    int find ;
    cout << " enter the number you want triple pair  to sum of " << endl;
    cin >> find;


    int a[]= {1,2,3,4,5,6,7,8};
    triplet(a,size,find);




    }