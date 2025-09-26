#include<iostream>
  using namespace std;
  int value=50;
  class MyClass
  {
      public:
      static int value;
  };
  int MyClass::value=30;
  int main()
  {
      int value =20;
      cout<<"local variable"<<value<<endl;
      cout<<"global variable"<<::value<<endl;
      cout<<"this is static variable of class"<<MyClass::value<<endl;
      for(int i=0,j=10;i<10;i++,j=j+2)
      {
          cout<<"i="<<i<<" j:"<<j<<endl;
      }
      int a,b,c;
      a=10;
      b=15;
      c=20;
      cout<<a<<b<<c<<endl;
      return 0;
  }


OUTPUT :local variable20
global variable50
this is static variable of class30
i=0 j:10
i=1 j:12
i=2 j:14
i=3 j:16
i=4 j:18
i=5 j:20
i=6 j:22
i=7 j:24
i=8 j:26
i=9 j:28
101520
