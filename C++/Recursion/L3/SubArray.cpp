#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    int n = arr.size();
    for(int i=0; i<n; i++)
    {
        for(int j = i; j<n; j++)
        {
            for(int k = i; k<=j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}