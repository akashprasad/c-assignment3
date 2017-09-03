# c-assignment3
//question 12
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the month number(1 to 12) :  ";
    cin>>a;
    switch(a)
    {
     case 1:cout<<"January - 31";break;
     case 2:cout<<"February - 28/29";break;
     case 3:cout<<"March - 31";break;
     case 4:cout<<"April - 30";break;
     case 5:cout<<"May - 31";break;
     case 6:cout<<"June - 30";break;
     case 7:cout<<"July - 31";break;
     case 8:cout<<"August - 31";break;
     case 9:cout<<"September - 30";break;
     case 10:cout<<"October - 31";break;
     case 11:cout<<"November - 30";break;
     case 12:cout<"December - 31";break;
     default:cout<<"Wrong input";
    }
    return 0;
}
