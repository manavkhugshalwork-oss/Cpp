#include <iostream>
using namespace std;
int main()
{
    int i, n;
    float AVG, A[1000], sum = 0.0;
    cout << "Enter the number of elements : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
        sum = sum + A[i];
    }
    AVG = (float)sum / n;
    cout << "The average of all the elements of the array is : " << AVG;
    return 0;
}