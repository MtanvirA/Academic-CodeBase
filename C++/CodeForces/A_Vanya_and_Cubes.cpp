// Author --> MtanvirA
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int ans;
    for (int i = 1; i < 100; i++)
    {
        int temp = ((i * (i + 1)) / 2);
        sum += temp;
        if (sum <= n)
        {
            ans = i;
        }
        if (sum > n)
            break;
    }
    cout << ans;
}