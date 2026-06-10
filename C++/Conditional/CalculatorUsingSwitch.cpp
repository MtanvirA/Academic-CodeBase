#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char ch;
    cout << "Enter the expression: ";
    cin >> a >> ch >> b;

    // if (ch == '+')
    //     cout << a + b;
    // else if (ch == '-')
    //     cout << a - b;
    // else if (ch == '*')
    //     cout << a * b;
    // else if (ch == '/')
    //     cout << a / b;
    // else
    //     cout << "Invalid sign!" << endl;

    switch (ch)
    {
    case '+':
    {
        cout << a + b;
        break;
    }

    case '-':
    {
        cout << a - b;
        break;
    }

    case '*':
    {
        cout << a * b;
        break;
    }

    case '/':
    {
        cout << a / b;
        break;
    }

    default:
    {
        cout << "Invalid expression!";
    }
    }
}