#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    int length = str.size();
    cout << str.substr(length/2) << endl;
}