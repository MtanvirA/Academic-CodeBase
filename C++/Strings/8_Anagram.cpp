#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s, t;
    getline(cin,s);
    getline(cin,t);
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s==t)
    {
        cout << "True" << endl;
        return 0;
    }

    cout << "False" << endl;
    return 0;
}