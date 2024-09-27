// #include <iostream>
// using namespace std;
// int main (){
//     int a;
//     cout<<"enter the number "<<endl;
//     cin>>a;
//     if (a<=0)
//     {
//         cout<<"absolute value of a is "<<(-1*a);

//     }
//     else{
//         cout<<"absolute value of a is "<<a;
//     }
//     return 0;
// }


// profit loss question 
#include<iostream>
using namespace std;
int main (){
    int sp,cp;
    cout<<"enter the cost price "<<endl;
    cin>>cp;
    cout<<"enter the selling price "<<endl;
    cin>>sp;
    if (sp>cp)
    {
        cout<<"profit is earn"<<endl<<sp-cp;

    }
    else{
        cout<<"loss is earned"<<endl<<cp-sp;
    }
return 0;

    
}