# c-assignment3
//question 21
#include<iostream>
using namespace std;
int main()
{
  float u,b;
  cout<<"Enter electricity unit charges : ";
  cin>>u;
  if(u<=50)
  {
    b=0.50*u;
    cout<<"Electricity unit charges : "<<u<<endl;
    cout<<"Electricity bill : "<<b;
  }
  else if (u>50 && u<=150)
  {
    b=25+u*0.75;
    cout<<"Electricity unit charges : "<<u<<endl;
    cout<<"Electricity bill : "<<b;
  }
  else if(u>150 && u<=250)
  {
    b=25+75+u*1.20;
    cout<<"Electricity unit charges : "<<u<<endl;
    cout<<"Electricity bill : "<<b;
  }
  else
  {
    b=25+74+120+u*1.50;
    cout<<"Electricity unit charges : "<<u<<endl;
    cout<<"Electricity bill : "<<b;
  }
  return 0;
}
