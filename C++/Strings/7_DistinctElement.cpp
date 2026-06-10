#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    int count=0;
    int n = str.size();

    for (int i = 0; i < n; i++)
    {
        if(n==0) break;
        if (i == 0)
        {
            if (str[i] != str[i + 1])
            {
                count++;
            }
        }
        else if (i == n - 1)
        {
            if (str[i] != str[i - 1])
            {
                count++;
            }
        }
        else if (str[i] != str[i + 1] && str[i] != str[i - 1])
        {
            count++;
        }
    }

    cout << "The number of non duplicates: " << count << endl;
}