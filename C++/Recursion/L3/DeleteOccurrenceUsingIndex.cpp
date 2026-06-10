#include<iostream>
#include<string>
using namespace std;
void rmChar(string str, string s, int idx)
{   
    if(idx == str.size())
    {
        cout << s;
        return;
    }
    char ch = str[idx];
    if(ch == 'm') rmChar(str, s, idx+1);
    else rmChar(str, s+ch, idx+1);
}

int main()
{
    string str = "my name is md. tanvir anjum";
    string s = "";
    rmChar(str, s, 0);
}