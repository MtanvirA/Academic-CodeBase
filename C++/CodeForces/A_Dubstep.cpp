#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void fixString(string str)
{
    // W A 
    if (str.size() > 1)
    {
        for (int i = 1; i < str.size(); i++)
        {
            if (str[i] == ' ' && str[i] == str[i - 1])
            {
                int index = i;
                str.erase(index, 1);
            }
        }
    }
    // cout << str;
    int i = 0;
    while (i<str.size() && !isalnum(str[i]))
    {
        str.erase(i, 1);
    }
    cout << str;
}
int main()
{
    string str;
    string str2 = "WUB";
    getline(cin, str);
    int index = str.find(str2);
    while (index != string::npos)
    {
        str.replace(index, str2.size(), " ");
        index = str.find(str2);
    }
    fixString(str);
    // cout << str;
}