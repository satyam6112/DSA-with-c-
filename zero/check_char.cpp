/*#include <iostream>
using namespace std;
int main (){
    char a;
    int n=1;
    printf("hello \n  %d ", n);
    scanf("%c",&a);

    int as=(int)a;

    if (as>=65 && as<=90 || as>=97 && as<=122 )
    {
      cout<<a<<" is alphabete character  ";
    }
    else{
        cout <<a<<" is not upper case charater ";
    }
    
    return 0;

} */

// while loop implitation 

/*
#include <iostream>
using namespace std ;
int main ()
{
  int a,i =1 ;
  cout<<"enter the value a "<< endl;
  cin >> a;

  while (i<=a)
  {
    cout<<  i  <<endl;
    i++;
  }
  
return 0;


}
*/
// sum of even numbers 


#include <iostream>
using namespace std ;
int main (){
  int n,i=0;
  cout<< "enter the number you want even sum of"<< endl;
  cin>>n;
  int sum = 0;
  
  
    while (i<=n  )
    {
      if ( i % 2 == 0)
      {
       
      cout<<i<<endl;
      
      sum= sum + i;
      
      }
      i++;
      

    }
    cout<<"sum is "<<sum  << endl ;

    
  
return 0;

   
}