#include <iostream>
using namespace std;

int main()
{
    // initializing the matrix size
    int n, m;
    cout << "Enter the row: ";
    cin >> n;
    cout << "Enter the column: ";
    cin >> m;
    int arr[n][m];
    int brr[m][n];

    // taking input in the matrix
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    // showing the original matrix
    cout << "The normal matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // transposing the matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            brr[i][j] = arr[j][i];
        }
    }

    // showing the transpose matrix
    cout << "The transpose matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}