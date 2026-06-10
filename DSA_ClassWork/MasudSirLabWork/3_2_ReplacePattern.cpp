#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, p, r;
    cout << "Enter the main string: ";
    getline(cin, s);
    cout << "Enter the pattern to be replaced: ";
    getline(cin, p);
    cout << "Enter the pattern to replace with: ";
    getline(cin, r);

    int index = s.find(p);

    while (index != string::npos)
    {
        s.replace(index, p.size(), r);
        index = s.find(p);
    }

    cout << "The final string is: " << s;
    return 0;
}