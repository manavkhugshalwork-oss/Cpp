#include <iostream>
using namespace std;
int main()
{
    int n1, n2, m1, m2, A[100][100], B[100][100], SUM[100][100];
    cout << "Enter the number of rows and columns in Array 1 : ";
    cin >> n1 >> m1;
    cout << "Enter the elements of Array 1 : ";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Enter the number of rows and columns in Array 2 : ";
    cin >> n2 >> m2;
    cout << "Enter the elements of Array 2 : ";
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cin >> B[i][j];
        }
    }
    if (n1 != n2 || m1 != m2)
    {
        cout << "Addition is not possible";
    }
    else
    {
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m1; j++)
            {
                SUM[i][j] = A[i][j] + B[i][j];
            }
        }
        cout << "Sum of the two matrices is:" << endl;

        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m1; j++)
            {
                cout << SUM[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
