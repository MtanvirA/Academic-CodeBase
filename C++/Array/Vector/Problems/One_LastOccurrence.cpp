#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int num;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the number to find: ";
    cin >> num;
    vector<int> v;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    int pos = 1;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == num)
        {
            pos = i;
            break;
        }
    }
    cout << "Position: " << pos << endl; 
}