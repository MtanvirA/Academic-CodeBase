#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //initializing the parameters
    bool flag;
    int n;
    vector<int> nums;
    cout << "Enter the number of elements: ";
    cin >> n;
    //taking input of the array elements
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    //printing the array without sorting
    cout << "The original array: " << endl;
    for(int i=0; i<n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    //applying the optimized bubble sort
    for(int i=0; i<n-1; i++)
    {
        flag = true;
        for(int j=0; j<n-1-i; j++)
        {
            if(nums[j] > nums[j+1])
            {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
                flag = false;
            }
        }
        if(flag == true)
        {
            break;
        }
    }
    //printing the sorted array
    cout << "The sorted array: " << endl;
    for(int i=0; i<n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}