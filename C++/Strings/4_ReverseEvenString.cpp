#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    int len = str.size();
    cout << str << endl;
    reverse(str.begin()+0, str.begin()+(len/2));
    cout << str << endl;
}