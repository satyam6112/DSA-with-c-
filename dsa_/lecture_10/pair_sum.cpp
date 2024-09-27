// #include <iostream>
// using namespace std;

// void pairSum(int a[], int n, int targetSum)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] + a[j] == targetSum)
//             {
//                 cout << a[i] << "  " << a[j] << endl;
//             }
//         }
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     cout << sizeof(arr) <<  "     " <<   sizeof(arr[0]);
    
//     int num;

//     cout << "Enter the sum you want pairs for: ";
//     cin >> num;

//     pairSum(arr, size, num);
// }

#include <bits/stdc++.h> // This includes a bunch of standard C++ libraries.

vector<vector<int>> pairSum(vector<int> &arr, int s) {
    vector<vector<int>> ans; // This will store the pairs that satisfy the condition.

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == s) { // Check if the sum of elements at positions i and j is equal to s.
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j])); // Store the smaller element first.
                temp.push_back(max(arr[i], arr[j])); // Store the larger element second.
                ans.push_back(temp); // Add the pair to the answer vector.
            }
        }
    }

    sort(ans.begin(), ans.end()); // Sort the answer vector lexicographically.

    return ans; // Return the vector containing pairs that sum up to s.
}

