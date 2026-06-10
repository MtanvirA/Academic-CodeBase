#include <iostream>
#include <vector>
using namespace std;
void subSets(vector<int> &ans, vector<int> &arr, int idx, int n, int k)
{
    if (idx == n)
    {
        if (ans.size() == k)
        {
            for (int ar : ans)
            {
                cout << ar << " ";
            }
            cout << endl;
        }

        return;
    }
    int num = arr[idx];
    subSets(ans, arr, idx + 1, n, k);
    ans.push_back(num);
    subSets(ans, arr, idx + 1, n, k);
    ans.pop_back();
}
int main()
{
    int n;
    int k;
    cout << "Enter the numbers: ";
    cin >> n >> k;
    vector<int> arr;
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        arr.push_back(i);
    }
    subSets(ans, arr, 0, n, k);
}