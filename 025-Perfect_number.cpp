#include <iostream>
using namespace std;
int main()
{
    int sum = 0, i = 1, n;
    cout << "Enter the number : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (2 * n == sum)
    {
        cout << n << " is a perfect number";
    }
    else{
        cout<< n << " is not a perfect number";
    }
    return 0;
}