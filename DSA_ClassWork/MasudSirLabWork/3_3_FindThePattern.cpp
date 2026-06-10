#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, p;
    cout << "Enter the string: ";
    getline(cin, s);
    cout << "Enter the pattern to be found: ";
    getline(cin, p);

    int index = s.find(p);
    cout << "The pattern appears in the following indices: " << endl;
    while (index != string::npos)
    {
        cout << index + 1 << " ";
        index = s.find(p, index + 1);
    }
    return 0;
}