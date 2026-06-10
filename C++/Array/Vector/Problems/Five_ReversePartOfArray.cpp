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

void reverseVectorPartial(vector<int> &v, int a, int b)
{
    for (int i = a; i <= (a + b) / 2; i++)
    {
        int j = b;
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        b--;
    }
}

int main()
{
    int n;
    int a, b;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the range: ";
    cin >> a >> b;
    vector<int> v;

    inputVector(v, n);

    printVector(v);

    reverseVectorPartial(v, a, b);

    printVector(v);
}