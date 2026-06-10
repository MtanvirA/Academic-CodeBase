#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter your exam number: " << endl;
    cin >> num;
    if(num>80) cout << "Very Good" << endl;
    else if(num>60) cout << "Good" << endl;
    else if(num>40) cout << "Average" << endl;
    else cout << "Fail" << endl;
}