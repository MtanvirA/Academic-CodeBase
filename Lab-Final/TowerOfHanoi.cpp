#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

void legalMove(stack<int> &s1, stack<int> &s2,
               char rod1, char rod2)
{
    if (s1.empty())
    {
        s1.push(s2.top());
        cout << "Move disk "
             << s2.top()
             << " from " << rod2
             << " to " << rod1 << endl;
        s2.pop();
    }
    else if (s2.empty())
    {
        s2.push(s1.top());
        cout << "Move disk "
             << s1.top()
             << " from " << rod1
             << " to " << rod2 << endl;
        s1.pop();
    }
    else if (s1.top() > s2.top())
    {
        s1.push(s2.top());

        cout << "Move disk "
             << s2.top()
             << " from " << rod2
             << " to " << rod1 << endl;

        s2.pop();
    }
    else
    {
        s2.push(s1.top());

        cout << "Move disk "
             << s1.top()
             << " from " << rod1
             << " to " << rod2 << endl;

        s1.pop();
    }
}

int main()
{
    int n;

    cout << "Enter number of disks: ";
    cin >> n;

    stack<int> src, aux, dest;

    for (int i = n; i >= 1; i--)
    {
        src.push(i);
    }

    char S = 'A', A = 'B', D = 'C';

    if (n % 2 == 0)
    {
        swap(A, D);
    }

    int totalMoves = pow(2, n) - 1;

    for (int i = 1; i <= totalMoves; i++)
    {
        if (i % 3 == 1)
        {
            legalMove(src, dest, S, D);
        }
        else if (i % 3 == 2)
        {
            legalMove(src, aux, S, A);
        }
        else
        {
            legalMove(aux, dest, A, D);
        }
    }

    return 0;
}