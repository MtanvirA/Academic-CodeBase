#include <iostream>
#include <vector>
using namespace std;

void fixVector(vector<int> &nums, int n, int m, int num)
{
    for (int i = n; i < m; i++)
    {
        nums[i] = num;
    }
}

void inputVector(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
}

void displayVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void sortVector(vector<int> &v)
{
    int noz = 0;
    int noo = 0;
    int nott = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
            noz++;
        else if (v[i] == 1)
            noo++;
        else
            nott++;
    }

    cout << noz << " " << noo << " " << nott << endl;

    fixVector(v, 0, noz, 0);
    fixVector(v, noz, noz+noo, 1);
    fixVector(v, noo+noz, noo+noz+nott, 2);
}

int main()
{
    vector<int> v;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";

    inputVector(v, n);
    // displayVector(v);

    sortVector(v);
    displayVector(v);
}