#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the row of first matrix: ";
    cin >> a;
    cout << "Enter the column of first matrix: ";
    cin >> b;
    int arr[a][b];

    int m, n;
    cout << "Enter the row of second matrix: ";
    cin >> m;
    cout << "Enter the column of second matrix: ";
    cin >> n;
    int brr[m][n];

    if (b == m)
    {
        cout << "Enter the elements of first matrix: " << endl;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> arr[i][j];
            }
        }

        cout << "Enter the elements of second matrix: " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> brr[i][j];
            }
        }

        int mrr[a][n];
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int sum = 0;
                for (int k = 0; k < b; k++)
                {
                    sum += arr[i][k] * brr[k][j];
                }
                mrr[i][j] = sum;
            }
        }

        cout << endl;
        cout << "The first matrix: " << endl;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;

        cout << "The second matrix: " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << brr[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;

        cout << "The resultant matrix: " << endl;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << mrr[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    else
    {
        cout << "These matrices can not be multiplied!";
    }
}