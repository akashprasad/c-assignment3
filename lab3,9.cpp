# c-assignment3
// question 9
#include <iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter a character : ";
    cin>>a;
    if((a>=65 && a<=90) || (a>=97 && a<=122))
    cout<<"the character is alphabet.";
    else if(a>=48 && a<=57)
    cout<<"The character is digit.";
    else
    cout<<"The character is special character.";
    return 0;
}
