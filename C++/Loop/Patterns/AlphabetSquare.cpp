#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        int num = 65;
        for(int j=1; j<=n; j++)
        {
            cout << (char)num << " ";
            num++;  
        }
        cout << endl;
    }
}