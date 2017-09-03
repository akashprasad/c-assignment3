# c-assignment3
// question 18
#include <iostream>
#include <cmath>
using namespace std;

int main()
 {
    float sp,cp;
    cout<<"Enter the cost price : ";
    cin>>cp;
    cout<<"Enter the selling price : ";
    cin>>sp;
    if(sp>cp)
    cout<<"Profit : "<<(sp-cp);
    else if(cp<sp)
    cout<<"lose "<<(cp-sp);
    else
    cout<<"no profit , no lose";
    return 0;
}
