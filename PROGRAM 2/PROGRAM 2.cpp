#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<"hello world"<<endl;
    cout<<setw(10)<<"name"<<endl;
    cout<<setfill('*')<<setw(10)<<123<<endl;
    cout<<setfill(' ');
    cout<<setprecision(3)<<3.14159<<endl;
    return 0;
}



output:hello world
      name
*******123
3.14
