#include <iostream>
using namespace std;
int main()
{
    float amount;
    cout << "Enter the total bill amount : ";
    cin >> amount;
    if (amount >= 100 && amount < 500)
    {
        float discount = (amount) - (0.1 * amount);
        cout << "Your discount is 10%\n";
        cout << "Your final bill amount is : " << discount;
    }
    else if (amount >= 500)
    {
        float discount = (amount) - (0.2 * amount);
        cout << "Your discount is 20%\n";
        cout << "Your final bill amount is : " << discount;
    }
    else
    {
        cout << "Your discount is 0%\n";
        cout << "Your final bill amount is : " << amount;
    }
    return 0;
}