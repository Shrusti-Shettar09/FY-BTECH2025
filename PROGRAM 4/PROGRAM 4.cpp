#include<iostream>
#include<iomanip>
using namespace std;
struct student
{
    int age;
    unsigned int id=4;
    unsigned int grade=3;
};
int main()
{ 
    student student1;
    student1.age=18;
    student1.id=2;
    student1.grade=1;
    cout<<"ÏD is"<<student1.id<<endl;
    cout<<student1.grade;
    cout<<student1.age;
    return 0;
}




output:ÏD is2
118
