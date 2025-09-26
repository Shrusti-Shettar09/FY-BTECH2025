#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int value=10;
    int*const ptr=&value;
    cout<<"initial value="<<*ptr<<endl;
    *ptr=25;
    cout<<"modified value="<<*ptr<<endl;
    return 0;
}




output:initial value=10
modified value=25













    
# include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=10;
    int b=20;
    int*const ptr=&a;
    cout<<"before"<<ptr<<endl;
    cout<<"before value"<<*ptr<<endl;
    *ptr=6;
    return 0;
}



output:before0x7ffc50ac3c7c
before value10


=== Code Execution Successful ===
