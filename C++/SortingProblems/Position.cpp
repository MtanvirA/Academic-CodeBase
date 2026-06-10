//Author --> MtanvirA
#include<iostream>
#include<vector>
#include<climits>
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
    //building the position array
    vector<int> vc(n);
    int pos = -1;
    for(int i=0; i<n; i++)
    {
        pos++;
        int min = INT_MAX;
        int mindex = -1;
        for(int j=0; j<n; j++)
        {
            if(vc[j] == 1) continue;
            else
            {
                if(min>v[j])
                {
                    min = v[j];
                    mindex = j;
                }
            }
        }
        v[mindex] = pos;
        vc[mindex] = 1;
    }
    //printing the postion array
    cout << "The postion array: ";
    for(int temp: v)
    {
        cout << temp << " ";
    }
    cout << endl;
}