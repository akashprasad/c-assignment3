# c-assignment3
// question 33
#include<iostream>
using namespace std;
int main()
{
 int n,ld,fd,sum;
 cout<<"Enter any number : ";
 cin>>n;
 int a=n;
 ld=n%10;
 while(n>10)
 {

   n=n/10;
   fd=n;
 }
 cout<<"first digit of  "<<a<<" = "<<fd<<endl;
 cout<<"Last digit of  "<<a<<" = "<<ld<<endl;
 sum= fd+ld;
 cout<<endl<<"The sum of first and last digit of the number : "<<sum;
 return 0;
}
