# c-assignment3
// question 8
#include <iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter a alphabet : ";
    cin>>a;
    switch(a)
    {
      case'a':case'e':case'i':case'o':case'u':
      case'A':case'E':case'I':case'O':case'U':
      cout<<"The character is vowel.";break;
      default:
      cout<<"The character is consonant";
    }
    return 0;
}
