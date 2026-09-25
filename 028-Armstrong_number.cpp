#include <iostream>
using namespace std;
int main()
{
    int m, n, r, sum = 0;
    cout << "Enter a number : ";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r * r * r;  
    }
    if (sum == m)
    {
        cout << m << " is an armstrong number";
    }
    else
    {
        cout << m << " is not an armstrong number";
    }
    return 0;
}