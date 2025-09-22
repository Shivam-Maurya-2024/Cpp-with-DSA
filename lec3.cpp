//sum of all si

#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int sum;
    int n=9;
    while (i<=n)
    {
        if(i%3==0)
        {
           sum+=i;
            }
           i++;
    }
     cout<<sum<<endl;
}

//sum of all numbers from 1 to N which are divisible by 3 by for loop.

// # include <iostream>
// using namespace std;
// int main()
// {
//     int n=30;
//     int nums;
//     for (int i=1; i<=n ;i++)
//     {
//         if (i%3==0)// always remember yaha pr i ayyega na ki n. it's your second mistake.
//         {
//             cout<<"the number which divisble by 3 = "<<i<<endl;
//         }
       
//     }
//     return 0;
// } 


 //sum of all even numbers from 1 to n by for loop.

// # include<iostream>
// using namespace std;
// int main()
// {
//     int n =8;
//     int sumEven=0;

//     for (int i= 1; i<=n; i++)
//     {
//         if (i%2==0)// always remember that yaha pr n nahi i aayega.
//         {
//             sumEven+=i;
//         }
        
//     }
//     cout<<"sum of even numbers ="<<sumEven<<endl;

    
//     return 0;

// }


// sum of all odd  numbers from 1 to N. by using While loop.

// # include<iostream>
// using namespace std;
// int main()
// {
//     int n =10;
//     int i=0;
//     int sumOdd=0;

//     while (i<=n)
//     {
         
//         if (i%2!=0)
//         {
//             sumOdd+=i;
//         }
//         i++;
//     }
//     cout<<"Sum of odd numbers ="<<sumOdd<<endl;
//     return 0;

// }



// as per ma'am says we calculate total number of sum 1 to n.

// # include<iostream>
// using namespace std;
// int main()
// {
//     int n =0;
//     int i=1;
//     int sum =0;
//     while (i<=n)
//     {
//         sum+=i;
//         i++;
//     }
//     cout<<"sum ="<<sum<< endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;

//     cout <<"enter the the character :";
//     cin>>ch;
    
//      if('A'<=ch && 'Z'>=ch)
//      {
//         cout<<"the character is in upper case\n";
//      }else{
//         cout<<"the character is in lower case\n";
//      }
// }