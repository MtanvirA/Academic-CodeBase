#include <iostream>
#include <cmath>
using namespace std;
void solve(int a, int b, int c)
{
    float x1, x2;
    float d = pow(b, 2) - 4 * a * c;
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "x1 = " << x1 << " and x2 = " << x2;
    }
    else if (d == 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        cout << "x = " << x1;
    }
    else
    {
        cout << "Imaginary Solution!";
    }
}
int main()
{
    int a, b, c;
    cout << "Enter the coefficient of x^2, x, and constant: ";
    cin >> a >> b >> c;
    solve(a, b, c);
    return 0;
}