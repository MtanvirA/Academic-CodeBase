#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cout << "Enter the string length: ";
    cin >> n;
    char str[n];
    cout << "Enter the string: ";
    for(int i=0; i<n; i++)
    {
        cin >> str[i];
    }

    int i = 0;
    while(str[i] != '\0')
    {
        if(i%2==0)
        {
            str[i] = 'a';
        }
        i++;
    }

    cout << str << endl;


}