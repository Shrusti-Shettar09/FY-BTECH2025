CALL BY VALUE:                                                                                              
#include<iostream>
#include<iomanip>
using namespace std;
void callbyvalue(int x ,int y)
{
    int temp = x;
x = y;
y = temp;
}
int main()
{
    int a,b;
    cout<<"enter the values of a and b"<<endl;
    cin>>a>>b;
    cout<<"a&b before swape:"<<a<<" "<<b<<endl;
    callbyvalue(a,b);
    cout<<"a&b after swape:"<<b<<" "<<b<<endl;
    return 0;
}




OUTPUT:enter the values of a and b
10
30
a&b before swape:10 30
a&b after swape:30 30


=== Code Execution Successful ===








CALL BY ADDRESS
#include<iostream>
#include<iomanip>
using namespace std;
void callbyvalue(int x ,int y)
{
    int temp = x;
x = y;
y = temp;
}
void callbyaddress(int* x,int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a,b;
    cout<<"enter the values of a and b"<<endl;
    cin>>a>>b;
    cout<<"a&b before swap:"<<a<<" "<<b<<endl;
    callbyvalue(a,b);
    cout<<"a&b after swap:"<<a<<" "<<b<<endl;
    cout<<"a&b before swap:"<<a<<" "<<b<<endl;
    callbyaddress(&a,&b);
    cout<<"a&b after swap:"<<a<<" "<<b<<endl;
    return 0;
}


OUTPUT:enter the values of a and b
10
20
a&b before swap:10 20
a&b after swap:10 20
a&b before swap:10 20
a&b after swap:20 10


=== Code Execution Successful ===






CALL BY REFERENCE 
#include<iostream>
#include<iomanip>
using namespace std;
void callbyvalue(int x ,int y)
{
    int temp = x;
x = y;
y = temp;
}
void callbyaddress(int* x,int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void callbyreference(int &x,int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a,b;
    cout<<"enter the values of a and b"<<endl;
    cin>>a>>b;
    cout<<"a&b before swap:"<<a<<" "<<b<<endl;
    callbyvalue(a,b);
    cout<<"a&b after swap:"<<a<<" "<<b<<endl;
    cout<<"a&b before swap:"<<a<<" "<<b<<endl;
    callbyaddress(&a,&b);
    cout<<"a&b after swap:"<<a<<" "<<b<<endl;
    cout<<"a&b before swap:"<<a<<" "<<b<<endl;
    callbyreference(a,b);
    cout<<"a&b after swap:"<<a<<" "<<b<<endl;
     return 0;
}




OUTPUT:
enter the values of a and b
15
20
a&b before swap:15 20
a&b after swap:15 20
a&b before swap:15 20
a&b after swap:20 15
a&b before swap:20 15
a&b after swap:15 20


=== Code Execution Successful ===



RETURN BY REFERENCE 
#include<iostream>
#include<iomanip>
using namespace std;
void callbyvalue(int x ,int y)
{
    int temp = x;
x = y;
y = temp;
}
void callbyaddress(int* x,int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void callbyreference(int &x,int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int& returnbyreference(int& a,int& b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main()
{
    int a,b;
    cout<<"enter the values of a and b"<<endl;
    cin>>a>>b;
    cout<<"a&b before swap:"<<a<<" "<<b<<endl;
    callbyvalue(a,b);
    cout<<"a&b after swap:"<<a<<" "<<b<<endl;
    cout<<"a&b before swap:"<<a<<" "<<b<<endl;
    callbyaddress(&a,&b);
    cout<<"a&b after swap:"<<a<<" "<<b<<endl;
    cout<<"a&b before swap:"<<a<<" "<<b<<endl;
    callbyreference(a,b);
    cout<<"a&b after swap:"<<a<<" "<<b<<endl;
    cout<<"a&b before swap:"<<a<<" "<<b<<endl;
    returnbyreference(a,b);
    cout<<"a&b after swap:"<<a<<" "<<b<<endl;
 return 0;
}


OUTPUT:enter the values of a and b
10 
20
a&b before swap:10 20
a&b after swap:10 20
a&b before swap:10 20
a&b after swap:20 10
a&b before swap:20 10
a&b after swap:10 20
a&b before swap:10 20
a&b after swap:20 10


=== Code Execution Successful ===
