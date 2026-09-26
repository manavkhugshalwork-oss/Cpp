#include <iostream>
using namespace std;
int main()
{
    int i, n, A[100], sum = 0;
    cout << "Enter the number of elements : ";
    cin >> n;
    cout << "Enter the elements of array : ";
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
        sum = sum + A[i];
    }
    cout << "The sum of all the elements of the array is : " << sum;
    return 0;
}