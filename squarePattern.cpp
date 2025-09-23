#include<iostream>
using namespace std;
int main()
{
    int  n=4;
    
    for(int i =0;i<n;i++){
        for (int i = 0; i < n; i++)
        {


        }
        
    }

}












// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=4;
//     int num=1;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-i-1;j++) //spaces
//         {
//             cout<<" ";

//         }
//         for(int j=1;j<=i+1;j++)
//         {
//             cout<< j;

//         }
//         for(int j=i;j>0; j--)
//         {
//             cout<< j;

//         }
//             cout<<endl;

//     }

// }

// output:-
//    1
//   121
//  12321
// 1234321








// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=4;
//     char ch='A';

//     for(int i=0;i<n;i++)
//     {

//         for(int j=0;j<i;j++)
//         {
//             cout<<" ";
//         }
//         for (int j=0;j<n-i;j++)
//         {
//             cout<<(ch);
            
//         }ch+=1;
//         cout<<endl;

//     }


// }
// output:-
// AAAA
//  BBB
//   CC
//    D














// #include<iostream>
// using namespace std;
// int main()
// {
//     int n =4;
//     // char ch='A';
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i;j>=0;j--)
//         {
//             cout<<char ('A' +j)<<" ";
            

//         }
//         cout<<endl;
//     }
// }
// output:- 
// A 
// B A
// C B A
// D C B A








// #include<iostream>
// using namespace std;
// int main()
// {
//     int n =4;
//     char ch='A';
//     for(int i=0;i<n;i++)
//     {
//         // char ch='A';
//         for(int j=0;j<i+1;j++)
//         {
//             cout<<ch<<" ";
//             ch+=1;
            

//         }
        
//         cout<<endl;
//     }
// }
// output:-
// A 
// B C
// D E F
// G H I J













// #include<iostream>
// using namespace std;
// int main()
// {
//     int n =4;
//     char ch='A';
//     for(int i=0;i<n;i++)
//     {
//         // char ch='A';
//         for(int j=0;j<i+1;j++)
//         {
//             cout<<ch<<" ";
            

//         }
//         ch+=1;
//         cout<<endl;
//     }
// }
// output:-
// A 
// B B
// C C C
// D D D D







// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch='A';
//     int n=3;
//     for(int i =0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<< ch;
//             ch+=1;

//         }
//         cout<< endl;
//     }
// }
// output is :-
// ABC
// DEF
// GHI














// #include <iostream>
// using namespace std;
// int main()
// {
//     int n= 3;
//     int num =1;


//     for (int i = 1; i <=n; i++)
//     {
//         for ( int j = 1; j <=n; j++)
//         {
//             cout<<num ;
//             num+=1;
           
            
//         }
       
//         cout<<endl;
//     }

// }



// #include <iostream>
// using namespace std;
// int main()
// {
//     int n=4;
//     for(int i=1; i<=n;  i++)
//     {
//         char ch='A';
//         for(int j=1;j<=n;j++)
//         {
//             cout<<ch;
//             ch=ch+1;

//         }
//          cout<<endl;
//     }

// }