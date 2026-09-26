#include <iostream>
using namespace std;
int main()
{
    int i, n, A[1000], max;
    cout << "Enter the number of elements : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    max = A[0];
    for (i = 1; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout << max << " is the maximum element of the array";
    return 0;
}