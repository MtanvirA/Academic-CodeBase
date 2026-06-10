#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << "Enter the number of elements of the array: ";
    int n;
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    cout << "The unsorted array: ";
    for (int temp : v)
    {
        cout << temp << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++)
    {
        int min = v[i];
        int minIndex = i;
        for (int j = i; j < n; j++)
        {
            if (min > v[j])
            {
                min = v[j];
                minIndex = j;
            }
        }
        swap(v[i], v[minIndex]);
    }
    cout << "The sorted array: ";
    for (int temp : v)
    {
        cout << temp << " ";
    }
    cout << endl;
}