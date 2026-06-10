#include <iostream>
using namespace std;

void sum(int n, int s)
{
    if (n == 0)
    {
        cout << s;
        return;
    }
    sum(n - 1, s + n);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    sum(n, 0);
}