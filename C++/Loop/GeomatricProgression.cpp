#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int num = 1;

    for(int i=1; i<=n; i++)
    {
        cout << num << endl;
        num*=2;
    }
}