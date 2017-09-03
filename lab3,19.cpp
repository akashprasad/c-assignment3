# c-assignment3
// question 19
#include <iostream>
#include <cmath>
using namespace std;

int main()
 {
    float math,phy,chem,bio,cs,t,p;
    cout<<"Enter the marks of math : ";
    cin>>math;
    cout<<"Enter the marks of physics : ";
    cin>>phy;
    cout<<"Enter the marks of chemistry : ";
    cin>>chem;
    cout<<"Enter the marks of biology : ";
    cin>>bio;
    cout<<"Enter the marks of computer : ";
    cin>>cs;
    t=math+phy+chem+bio+cs;
    p=(t*100)/500;
    cout<<"Total : "<<t;
    cout<<"Percentage : "<<p<<"%";
    if(p>=90)
    cout<<"Grade A";
    else if(p>=80 && p<90)
    cout<<"Grade B";
    else if(p>=70 && p<80)
    cout<<"Grade c";
    else if(p>=60 && p<70)
    cout<<"GRade D";
    else if(p>=40 && p<60)
    cout<<"Grade E";
    else
    cout<<"Grade f";
    return 0;
}
