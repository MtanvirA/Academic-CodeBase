#include <iostream>
#include <vector>
using namespace std;

void inputVector(vector<int> &v, int n)
{
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
}

void printVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void reverseVector(vector<int> &v)
{
    for (int i = 0; i < v.size() / 2; i++)
    {
        int j = v.size() - 1 - i;
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> v;

    inputVector(v, n);

    printVector(v);

    reverseVector(v);

    printVector(v);
}