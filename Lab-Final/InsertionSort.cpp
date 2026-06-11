//Author --> MtanvirA
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //initializing the parameters
    vector<int> v;
    int n;
    //taking input of the elements of the array
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    //printing the original array
    cout << "The unsorted array: ";
    for(int temp: v)
    {
        cout << temp << " ";
    }
    cout << endl;
    //insertion sort
    for(int i=1; i<n; i++)
    {
        int j = i;
        while(j>=1)
        {
            if(v[j] >= v[j-1]) break;
            else swap(v[j], v[j-1]);
            j--;
        }
    }
    //printing the sorted array
    cout << "The sorted array: ";
    for(int temp: v)
    {
        cout << temp << " ";
    }
    cout << endl;
}