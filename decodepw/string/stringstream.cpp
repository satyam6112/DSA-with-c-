#include<iostream>
#include  <string>
#include <sstream>
using namespace std;
int main()
{
  string str;
  cout << " enter the string:  " << endl;
 getline(cin,str);
  stringstream ss(str);
  string temp;
  while(ss >> temp)
    {
      cout << temp << endl;
      
    }
  
}