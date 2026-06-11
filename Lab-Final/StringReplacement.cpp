#include<iostream>
#include<string>
using namespace std;
int main()
{
    string sentence;
    string pattern;
    string replace;
    cout << "Enter the sentence: " ;
    getline(cin, sentence);
    cout << "Enter the pattern to be replaced: ";
    getline(cin, replace);
    cout << "Enter the string to be inserted: ";
    getline(cin, pattern);

    int index = sentence.find(replace);

    while(index != string::npos)
    {
        sentence.replace(index, replace.size(), pattern);
        index = sentence.find(replace);
    }

    cout << "The final string is: " << sentence;
    cout << endl;
    return 0;
}