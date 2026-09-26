#include <iostream>
using namespace std;
int main()
{
    int key, n, A[1000];
    cout << "Enter the number of elements : ";
    cin >> n;
    cout << "Enter the element to search : ";
    cin >> key;
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] == key)
        {
            cout << "Element is found at index " << i;
            return 0;
        }
    }
    cout << "Element not found";
    return 0;
}