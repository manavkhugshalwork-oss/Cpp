#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 3 numbers : ";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "The biggest number is : " << a;
    }
    else if (b > c)
    {
        cout << "The biggest number is : " << b;
    }
    else
    {
        cout << "The biggest number is : " << c;
    }
    return 0;
}