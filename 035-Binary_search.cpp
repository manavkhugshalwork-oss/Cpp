#include <iostream>
using namespace std;
int main()
{
    int key, n, A[1000], h, l, mid;
    cout << "Enter the number of elements : ";
    cin >> n;
    cout << "Enter the element to search : ";
    cin >> key;
    cout << "Enter the elements in sorted order : ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    l = 0;
    h = n - 1;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (A[mid] == key)
        {
            cout << "Element found at index " << mid;
            return 0;
        }
        else if (A[mid] > key)
        {
            h = mid - l;
        }
        else
        {
            l = mid + l;
        }
    }
    cout << "Element not found";
    return 0;
}