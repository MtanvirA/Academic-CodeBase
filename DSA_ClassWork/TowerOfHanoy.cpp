#include <iostream>
using namespace std;
int count = 0;
void hanoi(int n, char start, char mid, char end)
{
    count ++;
    if (n == 1)
    {
        cout << "Move " << n << " From " << start << " --> " << end << endl;
        return;
    }
    hanoi(n - 1, start, end, mid);
    cout << "Move " << n << " from " << start << " --> " << end << endl;
    hanoi(n - 1, mid, start, end);
}

int main()
{
    int n;
    cout << "Enter the no of disks: ";
    cin >> n;
    cout << "Steps: " << endl;
    hanoi(n, 'A', 'B', 'C');
    cout << count << endl;
}