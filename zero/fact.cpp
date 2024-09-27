#include <iostream>
using namespace std ;
int fact (int );
int main (){
    int n;
    cout <<"enter the number "<<endl;
    cin>>n;
  int a=  fact(n);
  cout<<"factorial of n is = "<<a;
    return 0;

}
int fact (int n ){
    if (n==0 || n==1)
    {
        return n;
    }
    else{
        return  (n) *fact(n-1);
    }
    
}