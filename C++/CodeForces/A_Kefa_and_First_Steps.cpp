#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    vector<int> arr;
    int count = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    int max = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
            count++;
        else
        {
            count = 1;
        }
        if (count > max)
        {
            max = count;
        }
    }
    cout << max;
    return 0;
}