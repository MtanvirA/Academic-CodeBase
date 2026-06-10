#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    
    cout << "Enter the length of the vector: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}