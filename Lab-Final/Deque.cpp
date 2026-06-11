#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;

    int dq[SIZE];
    int rear = -1;

    // Insert Rear 10
    dq[++rear] = 10;

    // Insert Rear 20
    dq[++rear] = 20;

    // Insert Rear 30
    dq[++rear] = 30;

    // Insert Front 5
    for (int i = rear; i >= 0; i--)
    {
        dq[i + 1] = dq[i];
    }

    dq[0] = 5;
    rear++;

    cout << "Deque: ";

    for (int i = 0; i <= rear; i++)
    {
        cout << dq[i] << " ";
    }

    cout << endl;

    // Delete Front
    for (int i = 0; i < rear; i++)
    {
        dq[i] = dq[i + 1];
    }

    rear--;

    // Delete Rear
    rear--;

    cout << "After deletion: ";

    for (int i = 0; i <= rear; i++)
    {
        cout << dq[i] << " ";
    }

    return 0;
}