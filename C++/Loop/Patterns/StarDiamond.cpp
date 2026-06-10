#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter an odd number: ";
    cin >> m;
    n = m / 2 + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    n = m / 2;
    int nsp = n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2*nsp-1; j++)
        {
            cout << "* ";
        }
        nsp--;
        cout << endl;
    }
}