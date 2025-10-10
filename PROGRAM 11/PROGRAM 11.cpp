#include<iostream>
#include<iomanip>
using namespace std;

int main() 
{
  char option;
  int a;
  cout<<"enter option F or C";
  cin>>option;
  switch(option) 
{
   case'F':
       cout<<"enter temperature in farenheit"<<endl;
       cin>>a;
       cout<<(a*9/5)+32;
       break;

  
   case 'C':
        cout<<"enter temperature in celsius"<<endl;
        cin>>a;
        cout<<5/9*(a-32);
        break;    
   }
   return 0;
   }


OUTPUT 1
enter option F or CF
enter temperature in farenheit
7 6
44

=== Code Execution Successful ===



OUTPUT 2
enter option F or CC 
enter temperature in celsius
9 6
0

=== Code Execution Successful ===
