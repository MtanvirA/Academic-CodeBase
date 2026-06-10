#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str = "Tanvir";
    cout << str << endl;
    cout << str.size() << endl;
    reverse(str.begin()+2, str.begin()+4);
    cout << str << endl;
    
}