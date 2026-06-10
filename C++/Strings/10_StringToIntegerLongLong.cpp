#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    // string to integer
    string str = "12345";
    int num;
    num = stoi(str);
    cout << num - 1 << endl;
    // integer to string
    int num1 = 98765;
    string str1 = to_string(num1);
    cout << str1 << endl;
    // string to long long
    string str2 = "123456789101112";
    long long num2 = stoll(str2);
    cout << num2 << endl;
    return 0;
}