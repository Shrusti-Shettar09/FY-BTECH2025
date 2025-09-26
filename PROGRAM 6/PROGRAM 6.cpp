#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int value1=5;
    int value2=7;
    const int * ptr=&value1;
    cout<<" initial address="<<ptr<<endl;
    ptr=&value2;
    cout<<"final address="<<ptr<<endl;
    return 0;
}



output:initial address=0x7ffd5fe96e94
final address=0x7ffd5fe96e90


=== Code Execution Successful ===
