#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    string str = to_string(num);
    cout << "The number of digits in that number: " << str.length() << endl;
    
    return 0;
}