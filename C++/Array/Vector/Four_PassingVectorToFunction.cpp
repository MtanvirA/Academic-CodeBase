#include <iostream>
#include <vector>
using namespace std;
void change(vector<int> &v) // pass by value
// void change(vector<int> &v) --> pass by reference
{
    v[2] = 78;
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> v;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl; 

    change(v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}