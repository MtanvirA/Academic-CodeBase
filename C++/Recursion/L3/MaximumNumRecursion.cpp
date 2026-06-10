#include<iostream>
#include<vector>
using namespace std;
void printMax(vector<int> &arr, int index, int max)
{
    if(index == arr.size())
    {
        cout << max;
        return;
    }
    if(max<arr[index])
    {
        max = arr[index];
    }
    printMax(arr, index+1, max);
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
    printMax(arr, 0, arr[0]);
}