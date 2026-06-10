#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    sort(str.begin(), str.end());

    int max = 0;
    int index = -1;

    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if(str.size() == 1)
        {
            cout << str;
            return 0;
        }  
        if (i == str.size() - 1)
        {
            if (str[i] == str[i - 1])
            {
                count++;
            }
            if (count > max)
            {
                index = i;
                max = count;
            }
        }
        else if (str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            count++;
            if (count > max)
            {
                index = i;
                max = count;
            }
            count = 0;
        }
    }
    cout << "Most frequent character: " << str[index] << endl;
}