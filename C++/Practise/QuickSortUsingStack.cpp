#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int partition(vector<int> &nums, int low, int high)
{
    int pivot = nums[high];
    int i = low - 1;
    int j = low;
    while(j<high)
    {
        if(nums[j] <= pivot)
        {
            i++;
            swap(nums[i],nums[j]);
        }
        j++;
    }
    swap(nums[i+1], nums[high]);
    return i+1;
}
void quickSort(vector<int> &nums)
{
    stack<pair<int,int>> todo;
    todo.push({0, nums.size()-1});
    while(!todo.empty())
    {
        int low = todo.top().first;
        int high = todo.top().second;
        todo.pop();
        int pivot = partition(nums, low, high);
        if(pivot-1 > low)
        {
            todo.push({low, pivot-1});
        }
        if(pivot+1 < high)
        {
            todo.push({pivot+1, high});
        }
    }
}
int main()
{
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    vector<int> nums;
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++)
    {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    // sort(nums.begin(), nums.end());
    quickSort(nums);
    for(int num: nums)
    {
        cout << num << " ";
    }
    cout << endl;
}