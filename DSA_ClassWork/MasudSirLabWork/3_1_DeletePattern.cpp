#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, p;
    cout << "Enter the main string: ";
    getline(cin, s);
    cout << "Enter the pattern to be deleted: ";
    getline(cin, p);

    int index = s.find(p);

    while (index != string::npos)
    {
        s.erase(index, p.size());
        index = s.find(p);
    }

    cout << "The final string is: " << s;
    return 0;
}