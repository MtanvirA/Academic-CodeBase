#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int num;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            num = 1;
        }
        else
        {
            num = 0;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            if (num == 1)
                num = 0;
            else
                num = 1;
        }
        cout << endl;
    }
}