#include<iostream>
#include<string>
using namespace std;
void rmChar(string str, string s)
{   
    if(str.size() == 0)
    {
        cout << s;
        return;
    }
    char ch = str[0];
    if(ch == 'm') rmChar(str.substr(1), s);
    else rmChar(str.substr(1), s+ch);
}
int main()
{
    string str = "my name is md. tanvir anjum";
    string s = "";
    rmChar(str, s);
}