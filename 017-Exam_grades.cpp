#include <iostream>
using namespace std;
int main()
{
    int m1, m2, m3, total;
    float avg;
    cout << "Enter the marks in 3 each subjects : ";
    cin >> m1 >> m2 >> m3;
    total = m1 + m2 + m3;
    avg = (total) / 3;
    if (avg >= 60)
    {
        cout << "Grade A";
    }
    else
    {
        if (avg < 60 && avg >= 35)
        {
            cout << "Grade B";
        }
        else
        {
            cout << "Grade C";
        }
    }
    return 0;
}