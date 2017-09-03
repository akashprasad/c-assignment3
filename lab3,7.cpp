# c-assignment3
// question 7
#include <iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter a character : ";
    cin>>a;
    if((a>=65 && a<=90) || (a>=97 && a <=122))
    cout<<"The character is alphabet.";
    else
    cout<<"The character is not alphabet.";
    return 0;
}
