#include <iostream>
using namespace std;
int intersection(int arr[], int brr[], int n, int m)
{
    int ans;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr[i] == brr[j])
        {
            // ans = arr[i];
            cout << " " << arr[i] << " ";
            i++;
            j++;

            /* code */
        }
        else if (arr[i] < brr[j])
        {
            i++;
        }
        else if (arr[i] > brr[j])
        {
            j++;
        }

        /* code */
    }
    return arr[i];
}
int intersection2(int arr[], int brr[], int n, int m)
{
    int element;
    for (int i = 0; i < n; i++)
    {
        int element = arr[i];
        for (int j = 0; j < m; j++)
        {
            if (element < brr[j])
            {
                break;
                /* code */
            }

            if (brr[j] == element)
            {
                cout << "intersection is " << brr[j] << endl;

                brr[j] = INT_FAST32_MIN;

                break;

                /* code */
            }

            /* code */
        }
         // cout << endl << "------ >> value of arr[i] " << arr[i] << " ---->>" ;


        /* code */
    }
}

int main()
{
    int asize, bsize;
    cout << "enter the size of array ---> a" << endl;
    cin >> asize;
    cout << "enter the size of array ---> b" << endl;
    cin >> bsize;

    int a[] = {1, 2, 2, 2, 3, 4};
    int b[] = {2, 2, 3, 3};

    intersection(a, b, asize, bsize);
    cout << endl << "---------------------------------------------------------------------------------------------------" << endl;
    cout << endl <<  "---------------------------------------------------------------------------------------------------" << endl;
    intersection2(a, b, asize, bsize);
}