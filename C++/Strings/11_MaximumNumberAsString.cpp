#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    //declaring the main vector to store the string of numbers
    vector<string> snum;
    //str to get all the numbers from user in a single line
    string str;
    cout << "Enter the numbers(as string!): ";
    // getting the input from user
    getline(cin, str);
    // using stringstream to break all the numbers into individual string numbers
    stringstream s(str);
    string temp;
    // pushing the string numbers into the string vector
    while (s >> temp)
    {
        snum.push_back(temp);
    }

    //checking whether we have the string numbers in the vectors or not
    for(int i=0; i<snum.size(); i++)
    {
        cout << snum[i] << endl;
    }

    return 0;
}