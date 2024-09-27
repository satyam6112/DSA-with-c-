#include <iostream>
#include <vector>
using namespace std;
vector <int> merse(vector<int>&a, vector <int>&b)
{
    int s1 = a.size() ;
    int s2 = b.size() ;
    vector <int> res (s1 + s2);


   
    int i =0;
    int j = 0;
    int k = 0 ;
    while ((i <  s1) && (j < s2 ) )
    {
        if (a[i] < b[j])
        {
           res[k] = a[i];
            i++;
            

        }
        else
        {
            res[k] = b[j];
        
            j++;

        }
        k++;

        
        
        
    }
    if (i == s1 )
    {
        while (j < s2)
        {
            res[k] = b[j];
            j++;
            k++;


        }
        

    }
    if (j == s2)
    {
        while (i<s1)
        {
          res[k] = a[i];
          i++;
          k++;


        }
        
    }
    
return res;

    
}
    
    

void display(vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> a = {1,4,5,8};
    vector<int> b= {2,3,6,7,10,12};
    display(a);
    display(b);
   vector<int>v=  merse( a,b);
  display(v);
  
   



}