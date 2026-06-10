#include <iostream>
using namespace std;

void print(int n, int x)
{
    if (n > x)
        return;
    cout << n << endl;
    print(n + 1, x);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    print(1, n);
    return 0;
}