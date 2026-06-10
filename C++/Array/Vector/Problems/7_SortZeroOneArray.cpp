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

void sortVector(vector<int> &v)
{
    int noz = 0;
    int noo = 0;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i] == 1) noo++;
        else noz ++;
    }

    for(int i=0; i<v.size(); i++)
    {
        if(i<noz) v[i] = 0;
        else v[i] = 1;
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

    sortVector(v);
    displayVector(v);



}