// Author --> MtanvirA
#include <iostream>
using namespace std;

int main()
{
    // setting the matrix parameters
    int a, b;
    cout << "Enter the row of matrix: ";
    cin >> a;
    cout << "Enter the column of matrix: ";
    cin >> b;
    int arr[a][b];

    // input of matrix elements
    cout << "Enter the elements of matrix: " << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing the main matrix
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

    // printing the spiral matrix
    cout << "The spiral matrix: " << endl;
    int minr = 0;
    int minc = 0;
    int maxr = a - 1;
    int maxc = b - 1;

    while ((minc <= maxc) && (minr <= maxr))
    {
        // right
        for (int i = minc; i <= maxc; i++)
        {
            cout << arr[minr][i] << " ";
        }
        minr++;
        if ((minc > maxc) || (minr > maxr))
            break;

        // down
        for (int i = minr; i <= maxr; i++)
        {
            cout << arr[i][maxc] << " ";
        }
        maxc--;
        if ((minc > maxc) || (minr > maxr))
            break;

        // left
        for (int i = maxc; i >= minc; i--)
        {
            cout << arr[maxr][i] << " ";
        }
        maxr--;
        if ((minc > maxc) || (minr > maxr))
            break;

        // up
        for (int i = maxr; i >= minr; i--)
        {
            cout << arr[i][minc] << " ";
        }
        minc++;
    }

    cout << endl;
}