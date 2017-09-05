# c-assignment3
// question 20
#include<iostream>
using namespace std;
int main()
{
  float bs,gs,hra,da;
  cout<<"Enter the basic salary : ";
  cin>>bs;
  if (bs<=10000)
  {
    hra=(bs*20)/100;
    da=(bs*80)/100;
    gs=bs+hra+da;
    cout<<"Basic salary : "<<bs<<endl;
    cout<<"Gross salary : "<<gs;
  }
  else if(bs>10000 && bs<=20000)
  {
    hra=(bs*25)/100;
    da=(bs*90)/100;
    gs=bs+hra+da;
    cout<<"Basic salary : "<<bs<<endl;
    cout<<"Gross salary : "<<gs;
  }
  else
  {
    hra=(bs*30)/100;
    da=(bs*95)/100;
    gs=bs+hra+da;
    cout<<"Basic salary : "<<bs<<endl;
    cout<<"Gross salary : "<<gs;
  }
  return 0;
}
