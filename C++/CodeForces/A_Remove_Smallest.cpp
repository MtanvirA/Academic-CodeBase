#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool flag = false;
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            nums.push_back(num);
        }
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++)
        {
            if ((nums[i] - nums[i - 1]) > 1)
            {

                flag = true;
            }
        }
        if (flag)
            cout << "NO\n";
        else
            cout << "YES" << endl;
    }
}