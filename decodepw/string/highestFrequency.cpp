#include <iostream>

#include <vector>

#include <string>
#include <sstream>

using namespace std;

int main ()
{
  string s;
  getline(cin,s);
  vector<int>v(26,0);
  for(int i = 0 ; i < 26 ;i++)
    {
      char ch = s[i];
      int ascii = int(ch);
      s[ascii - 97]++;
    }
  int mx = 0 ;
  for(int i = 0 ; i < 26; i++)
    {
      if(s[i] > mx)
      {
        mx = s[i];
      }
    }
  for(int i = 0; i < 26 ; i++ )
    {
      if(s[i] == mx)
      {
        int ascii = i + 97;
        char ch = (char) ascii;
        cout << ch << " " << mx << endl;
        
      }
    }
}