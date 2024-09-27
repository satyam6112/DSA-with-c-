#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string str[] = {"124", "234", "678", "908"};

    int maxVal = stoi(str[0]);
    for (int i = 1; i < 4; i++) {
        int x = stoi(str[i]);
        if (maxVal < x) {
            maxVal = x;
        }
    }
    cout << maxVal << endl;

    return 0;
}
