#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < 2; j++)
        {
            int num;
            cin >> num;
            temp.push_back(num);
        }
        arr.push_back(temp);
    }
    for(int i = 0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i][1] == arr[j][0]) count++;
            if(arr[i][0] == arr[j][1]) count++;
        }
    }
    cout << count;
}