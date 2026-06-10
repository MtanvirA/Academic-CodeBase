#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    int fwd = 0;
    int bcw = n - 1;
    int sereja = 0;
    int dima = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[fwd] > arr[bcw])
            {
                sereja += arr[fwd];
                fwd++;
            }
            else
            {
                sereja += arr[bcw];
                bcw--;
            }
        }
        else
        {
            if (arr[fwd] > arr[bcw])
            {
                dima += arr[fwd];
                fwd++;
            }
            else
            {
                dima += arr[bcw];
                bcw--;
            }
        }
    }
    cout << sereja << " " << dima;
}