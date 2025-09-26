#include<iostream>
#include<iomanip>
using namespace std;
double area(double r)
{
    return 3.14*r*r;
}
double area(double b, double h)
{
    return 0.5*b*h;
}
double area(double breadth,double width,int dummy)
{
    return breadth*width;
}
int main()
{
    double r,b,h,br,w;
    cout<<"enter the radius of the circle"<<endl;
    cin>>r;
    cout<<"area of the circle is"<<area(r)<<endl;
    cout<<"enter base and height of the triangle"<<endl;
    cin>>b>>h;
    cout<<"area of the triangle is"<<area(b,h)<<endl;
    cout<<"enter breadth and width of the rectangle"<<endl;
    cin>>br>>w;
    cout<<"area of the rectangle is"<<area(br,w)<<endl;
    return 0;
}


OUTPUT:
enter the radius of the circle
5
area of the circle is78.5
enter base and height of the triangle
4
7
area of the triangle is14
enter breadth and width of the rectangle
3
5
area of the rectangle is7.5


=== Code Execution Successful ===
