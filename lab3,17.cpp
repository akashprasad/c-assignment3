# c-assignment3
// question 17
#include <iostream>
#include <cmath>
using namespace std;

int main()
 {

    float a, b, c, r2, r1, d, rp, iP;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    d = b*b - 4*a*c;

    if (d> 0)
     {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "roots = " <<endl<<r1 << endl;
        cout << r2<< endl;
     }

    else if (d == 0)
    {
        cout << "Roots are real and same." << endl;
        r1 = (-b + sqrt(d)) / (2*a);
        cout << "r1 = r2 =" << r1 << endl;
    }

    else
    {

        cout << "Roots are complex and different."  << endl;
    }

    return 0;
}
