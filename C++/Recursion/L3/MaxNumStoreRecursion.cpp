#include<iostream>
#include<vector>
using namespace std;
int maxArr(vector<int> &arr, int idx)
{
    if(idx == arr.size()) return arr[arr.size()-1];
    return max(arr[idx], maxArr(arr, idx+1));
}
int main()
{
    vector<int> arr;
    arr.push_back(15);
    arr.push_back(54);
    arr.push_back(89);
    arr.push_back(45);
    arr.push_back(14);
    arr.push_back(12);
    arr.push_back(97);
    arr.push_back(10);
    arr.push_back(57);
    arr.push_back(69);
    
    int maximum = maxArr(arr, 0);
    cout << maximum;
}