# c-assignment3
// question 16
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the sides of the triangle :  ";
    cin>>a>>b>>c;
    if(a==b==c)
    cout<<"Triangle is equilateral.";
    else if(a!=b && b!=c && c!=a)
    cout<<"Triangle is scalene.";
    else
    cout<<"Triangle is isosceles.";
    return 0;
}
