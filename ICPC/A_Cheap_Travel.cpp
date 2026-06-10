// Author --> MtanvirA
#include <iostream>
using namespace std;
int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int price1, price2, price3;
    price1 = n * a;

    if (n % m != 0)
    {
        price2 = (n / m) * b + b;
    }
    else
    {
        price2 = (n/m) * b;
    }

    price3 = (n / m) * b + (n % m) * a;

    if (price1 < price2)
    {
        if (price1 < price3)
        {
            cout << price1;
        }
        else
        {
            cout << price3;
        }
    }
    else
    {
        if (price2 < price3)
        {
            cout << price2;
        }
        else
        {
            cout << price3;
        }
    }
}