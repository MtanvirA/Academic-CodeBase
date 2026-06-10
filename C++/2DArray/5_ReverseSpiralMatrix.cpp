#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the row of matrix: ";
    cin >> a;
    cout << "Enter the column of matrix: ";
    cin >> b;
    int arr[a][b];

    cout << "Enter the elements of matrix: " << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;
    cout << "The main matrix: " << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "The spiral matrix: " << endl;
    for (int i = a-1; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            for (int j = b - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < b; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    cout << endl;
}