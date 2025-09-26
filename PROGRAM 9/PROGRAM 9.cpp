#include<iostream>
#include<iomanip>
using namespace std;
#define SQUARE(a) (a*a)
#define CUBE(a) (a*a*a)
int main()
{
    int x;
   cout<<"enter a variable"<<endl;
   cin>>x;
   cout<<"square of a variable in macro"<<SQUARE(x)<<endl;
   
   cout<<"cube of a variable in macro"<<CUBE(x)<<endl;
   return 0;
}



OUTPUT:
enter a variable
6
square of a variable in macro36
cube of a variable in macro216


=== Code Execution Successful ===
https://www.programiz.com/online-compiler/9RcfXKtKsCLCH




INLINE FUNCTION
#include<iostream>
#include<iomanip>
using namespace std;
#define SQUARE(a) (a*a)
inline int square(int a)
{
    return a*a;
}
#define CUBE(a) (a*a*a)
inline int cube(int a)
{
    return a*a*a;
}
int main()
{
    int x;
   cout<<"enter a variable"<<endl;
   cin>>x;
    cout<<"square of a variable in macro"<<SQUARE(x)<<endl;
   cout<<"cube of a variable in macro"<<CUBE(x)<<endl;
   cout<<"square of a variable in inline"<<square(x)<<endl;
   cout<<"cube of a variable in inline"<<cube(x)<<endl;
   return 0;
}




OUTPUT:
enter a variable
6
square of a variable in macro36
cube of a variable in macro216
square of a variable in inline36
cube of a variable in inline216


=== Code Execution Successful ===
