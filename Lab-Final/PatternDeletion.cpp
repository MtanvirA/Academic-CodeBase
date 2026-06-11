#include<iostream>
#include<string>
using namespace std;
int main()
{
    string sentence;
    string pattern;
    cout << "Enter the sentence: " ;
    getline(cin, sentence);
    cout << "Enter the pattern to be deleted: ";
    getline(cin, pattern);

    int index = sentence.find(pattern);

    while(index != string::npos)
    {
        sentence.erase(index, pattern.size());
        index = sentence.find(pattern);
    }

    cout << "The final string is: " << sentence;
    cout << endl;
    return 0;
}