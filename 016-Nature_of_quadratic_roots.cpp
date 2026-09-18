#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, d, r1, r2;
    cout << "Enter the values of a,b,c : ";
    cin >> a >> b >> c;
    d = (pow(b, 2)) - (4 * a * c);
    if (d > 0)
    {
        cout << "The roots are real and unequal";
    }
    else if (d == 0)
    {
        cout << "The roots are real and equal";
    }
    else
    {
        cout << "The roots are imaginary";
    }
    return 0;
}