#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    int samne = 0;
    int high = arr[0];
    int low = arr[0];
    int pisone = n-1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > high)
        {
            high = arr[i];
            samne = i;
        }
        if(arr[i] <= low)
        {
            low = arr[i];
            pisone = i;
        }
    }
    if(samne > pisone)
    {
        cout << samne + (n-1-pisone) - 1;
    }
    else
    {
        cout << samne + (n-1-pisone);
    }
    
    return 0;
}