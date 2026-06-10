#include<iostream>
#include<string>
using namespace std;
void subString(string ans, string org, int idx)
{
    if(idx == org.size())
    {
        cout << ans << endl;
        return;
    }
    char ch = org[idx];
    subString(ans+ch, org, idx+1);
    subString(ans, org, idx+1);
}
int main()
{
    string str= "abc";
    subString("", str, 0);
}