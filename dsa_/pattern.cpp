
/*
// print the pattern of reverse triaqngle 


#include <iostream>
using namespace std;
int main ()
{
    int row ;
    cout<<"enter the no of rows " << endl;
    cin>> row;
     int i =1;
    while (i<=row)
    {
         int j = i;
       while (j<=row)

       {
       // int j = i;

          cout<<i;
          j++;
       }
       cout << endl;
       i++;

    }
    
}
*/


//print 1234
//      1234
//      1234
//      1234


// #include <iostream>
// using namespace std ;
// int main (){
//    int row ;
//    cout<<"enter the number of rows you want " << endl;
//    cin >> row;
//    int n =1 ;
//    int i=1;
//    while (i<= row)
//    {
//       int j=1;

//       while ( j<= i)
//       {
//         // cout<< row -j+1;
//        // cout<< n << " "  ;
//        // n++;
//        cout << "*";


//          j++;
//       }
//       i++;
//       cout<< endl;

      
//    }
   
// }

// #include <iostream>
// using namespace std ;
// int main (){
//    int row ;
//    cout << "enter the number of rows "<<endl;
//    cin>> row ;
//    int i =1;
//    while (i<= row )
//    {
//       int j=1;
//       while (j<=i)
//       {
//         cout<< j << "\t" ;
//         j++;

//       }
//       cout<< endl;
//       i++;
      
      

//    }
   
// }




//*******************************************************************************


/* 1
   23
   456
   */


// #include <iostream>
// using namespace std;
// int main (){
//    int row;
//    cout<<"enter the number of rows you want "<<endl;
//    cin>> row;
//    int i =1;
//    int n=1;
//    while (i <= row )
//    {
//        int j=1;
//        while (j<=i)
//        {
//          cout << n;
//          n++;
//          j++;

//        }
//        cout<<endl;
//        i++;

       
//    }
   
// }


//***********************************************************************************************************************


/*1
  2 3
  3 4 5*/
/*
#include <iostream>
using namespace std;
int main  () {
   int row;
   cout<< "enter the number of rows ";
   cin >> row;
   int i=1;
   while (i<= row )
   {
      int j =i;
      while ( j<i*2)
      {
         cout<< j<< "\t";
         j++;

      }
      i++;
      cout<<endl;

   }
   }
   */
  /*
  1
  21
  321
  4321*/


                       


//  #include <iostream>
//  using namespace std;
//  int main ()
//  {
//    int n ;
//    cin >>n;
//    int row =1 ;
//    while (row<=n)
//    {
//       int col =1;
//       while (col <= n)
//       {
//          char ch ='A' + (row -1);
//          cout<< ch ;
//          col++;

//       }
//       cout <<endl;
//       row ++;

      
//    }
   
//  }
   // #include <iostream>
   // using namespace  std;
   // int main  () {
   //    int row;
   //    cout<<"enter the number of rows ";
   //    cout<<endl;
   //    cin>>row;
   //    int i =1;
   //    while (i<=row)
   //    {
   //       int j =1 ;
   //       while (j<= row)
   //       {
   //        char ch = 'A'+ (j-1);
   //        cout<<ch;

   //        j++;

   //       }
   //       cout<< endl;  
   //       i++;
       
       


   //    }



      
   // }
//    #include <iostream>
//    using namespace std;
//    int main (){
//       int row;
//       cout<<" enter the number of rows  ";
//       cin>>row;
//       int i =1;
//       char ch = 'A';

//       while (i<= row)
//       {

//          int j =1;
//          while (j<= row)
//          {
            
//             cout<<ch<< " ";
            
//  ch++;
//             j++;

            
            



//          }

//          cout<<endl;
//          i++;

         
         
//       }
      
//    }



// #include <iostream>
// using namespace std;
// int main (){

//    int row;
//    cout<<"enter the number of rows : ";
//    cin>>row;
//    int i =1;
//    while ( i <= row)
//    {
//       int j=1;
//       while (j<=i)
//       {
//          char ch = 'A'+(i -1 );
//          cout<<ch ;
//          j++;

//          /* code */
//       }

//       i++;
//       cout<<endl;

      
//       /* code */
//    }
   
   
//    }

// #include <iostream>
// using namespace std;
// int main(){
// int row;
// cout<< "enter the number of rows :";
// cin >> row;
// int i=1;
// char ch ;
// while (i<=row)
// {
//    int j=1;
//    while (j<=i)
//    {
      
//       ch= 'A'+i+j-2;
//        cout << ch;
//       //ch++;
//       j++;

//       /* code */
//    }
//    cout<< endl;
//    i++;

   
//    /* code */
// }

// }




// #include <iostream>
// using namespace std;
// int main(){
//    int row;
//    cout<<"enter the number of rows ";
//    cin>>row;
//    int i=1;
  
  
//    while (i<=row)
//    {
//       int j =1;
//        char ch =  'A'+i-1;
//       while (j<=i)
//       {
//          cout<<ch;
//          ch++;
//          j++;

//       }
//       cout<<endl;
//       i++;

      
//    }
   
// } 



// #include <iostream>
// using namespace std;
// int main(){
//    int row;
//    cin>>row;
//    int i =1 ;
//    while (i<= row)
//    {
      
   
   
//    int space = row - i;
//    while (space)
//    {
//       cout<< " ";

//       space--;

//    }
//    int j =1;

//    while (j<= i)
//    {
//       cout<<"*";
//       j++;

      

     
//    }
//    cout<<endl;
//    i++;

//    }
   
   

  
  
   
// }




// #include <iostream>
// using namespace std;
// int main() {
//    int n;
//    cout<< "enter the nummber of rows : ";
//    cin >> n;
//    int i=1;
//    while (i<=n )
//    {
//       int space=1;
//       while (space<i)
//       {
//          cout<< " ";
//          space++;

//          /* code */
//       }
//       int j=1;
//       while (j<n -i +1)
//       {
//          cout<<"*";
//          j++;

//          /* code */
//       }
//       cout<<endl;
//       i++;

      
      
//       /* code */
//    }
   
// }


// #include <iostream >

// using namespace std;
// int main ()
// {
//    int n;
//    cout << "enter the number of rows : ";
//    cin>>n;
//    int i=1;
//    while (i<=n)
//    {
//       int j=1;
//       while (j<= n - i+ 1)
//       {
//          cout<<"*"<<"\t";
//          j++;

//          /* code */
//       }
//       cout<<endl;
//       i++;

//       /* code */
//    }
   
// }



// #include <iostream>
// using namespace std;
// int main ()
// {
//    int n;
//    cin>>n;
//    int i=1;
//    while (i<=n)
//    {
//       int space =1;
//       while (space<i)
//       {
//          cout<<  " ";
//          space++;

//          /* code */
//       }
//       int j=1;
//       while (j<=n-i+1)
//       {
//          cout<<i;
//          j++;

//          /* code */
//       }
//       cout<<endl;
//       i++;

      
      
//       /* code */
//    }
   
// }




// #include <iostream>
// using namespace std;
// int main ( )
// {
//    int n ;
//    cin >>n;
//    int i=1;
//    int q=1;
//    while (i<=n)



//    {
//       int space=n-i;
//       while (space)
//       {
//          cout<< " ";
//          space--;

//          /* code */
//       }
      
//          int j=1;
//       while (j<i)
//       {
//          cout<< q;
//          q++;
//          j++;

//          /* code */
//       }
//       cout<<endl;
//       i++;



      
//       /* code */
//    }
   
   
// }



// dabang pattern 

#include <iostream>
using namespace std;
int main ()
{
   int n ;
   cout << "enter the number of rows : ";
   cin>>n;
   int i=1;
   while (i<=n)
   {
      int j=1;
      while (j<=n-i+1)
      {
         cout<<j<<"\t";
         j++;

         /* code */
      }
      j=1;

      while (j<= (i-1)*2)
      {
         cout<<"*"<<"\t";
         j++;

         /* code */
      }
      j=n- i +1;
      while (j>=1)
      {
         cout<<j << "\t";
         j--;

         /* code */
      }
      
      

      cout<<endl;
      i++;

      
      /* code */
   }
   
}