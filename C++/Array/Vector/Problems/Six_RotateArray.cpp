#include <iostream>
#include <vector>
using namespace std;

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

void rotateVector(vector<int> &v, int a, int b)
{
    int j = b;
    for (int i = a; i <= (a + b) / 2; i++)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        j--;
    }
}

int main()
{
    vector<int> v;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";

    inputVector(v, n);
    displayVector(v);

    int k;
    cout << "Enter the number of rotations: ";

    cin >> k;
    k = k % n;

    int m = v.size() - 1;
    rotateVector(v, 0, m - k);
    rotateVector(v, m - k + 1, m);
    rotateVector(v, 0, m);

    displayVector(v);
}