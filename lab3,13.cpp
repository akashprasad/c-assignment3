# c-assignment3
//question 13
#include<iostream>
using namespace std;
int main()
{
  int am,t,tw,fi,h,fh,th;
  cout<<"Enter the amount : ";
  cin>>am;
  th=am/2000;
  am=am%2000;
  fh=am/500;
  am=am%500;
  h=am/100;
  am=am%100;
  fi=am/50;
  am=am%50;
  tw=am/20;
  am=am%20;
  t=am/10;
  am=am%10;
  cout<<"2000 = "<<th<<endl;
  cout<<"500 = "<<fh<<endl;
  cout<<"100 = "<<h<<endl;
  cout<<"50  = "<<fi<<endl;
  cout<<"20 = "<<tw<<endl;
  cout<<"10 = "<<t<<endl;
  cout<<"coin = "<<am;
  return 0;
}
