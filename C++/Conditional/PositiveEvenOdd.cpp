#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a positive integer number: " << endl;
    int n;
    cin >> n;

    if (n >= 0)
    {
        if (n % 2 == 0)
        {
            cout << "Even positive number!" << endl;
        }
        else
        {
            cout << "Odd positive number! " << endl;
        }
    }
    else
    {
        cout << "Negative number!" << endl;
    }
}