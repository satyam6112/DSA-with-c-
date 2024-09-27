// program for calculating percentage of 5 subject 
// total marks is 150 30 marks each

#include <iostream>
using namespace std;
int main (){

    float m,s,c,h,e;
    cout<<"enter number of maths , science ,computer , hindi , english respectivel "<<endl;
    cin>>m>>s>>c>>h>>e;
    cout<<((m+s+c+h+e)/150)*100;
    return 0;

}