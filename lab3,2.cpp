# c-assignment3
// question 2
#include<iostream>
using namespace std;
int main()
{
 int a,b,c;
 cout<<"Enter three numbers : ";
 cin>>a>>b>>c;
 if(a>b && a>c)
 {
  cout<<a<<" Maximun number ";
 }
 else if(b>a && b>c)
 {
  cout<<b<<" maximum number.";
 }
 else
 {
  cout<<c<<" maximum number.";
  return 0;
 }  
