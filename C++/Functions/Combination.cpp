#include <iostream>
using namespace std;

int factorial(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
}

int combination(int n, int r)
{
    return (factorial(n) / (factorial(r) * (factorial(n - r))));
}

int main()
{
    int n, r;
    cout << "Enter n, r: ";
    cin >> n >> r;
    cout << "The result: " << combination(n, r);
}