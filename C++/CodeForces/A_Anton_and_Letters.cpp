#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;
int main()
{
    string str;
    int count=0;
    getline(cin, str);
    sort(str.begin(), str.end());
    //cout << str;
    for(int i=0; i<str.size(); i++)
    {
        if(isalnum(str[i]) && str[i] != str[i-1])
        {
            count ++;
        }
        else continue;
    }
    cout << count;
    return 0;
}