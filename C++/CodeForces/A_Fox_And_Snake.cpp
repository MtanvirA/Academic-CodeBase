#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int back = b - 1;
    for (int i = 0; i < a; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < b; j++)
            {
                cout << "#";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < b; j++)
            {
                if (j == back)
                {
                    cout << "#";
                }
                else
                    cout << ".";
            }
            if (back == b - 1)
                back = 0;
            else
                back = b - 1;
            cout << endl;
        }
    }
    return 0;
}