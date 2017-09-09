# c-assignment3
// question 34
#include<iostream>
using namespace std;
int main()
{
 int num,di;
 cout<<"Enter a number : ";
 cin>>num;
 while(num!=0)
 {
  di=num%10;
  num=num/10;
  cout<<di;
 }
 return 0;
}
