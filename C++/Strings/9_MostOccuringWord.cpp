#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    // string vector declaration
    vector<string> arr;
    string str;
    cout << "Enter the sentence: ";
    getline(cin, str);
    string temp;
    stringstream s(str);
    // pushing each word to the vector using string stream
    while (s >> temp)
    {
        arr.push_back(temp);
    }
    // printing the sentence with each words at different line
    cout << "Before sorting: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    // soring the vector
    sort(arr.begin(), arr.end());
    // printing the vector after sorting
    cout << "After sorting: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    int count = 0;
    int max = 0;
    int index = -1;
    // counting the words
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[i - 1])
            count++;
        else
        {
            count = 1;
        }

        if (count > max)
        {
            max = count;
            index = i;
        }
    }

    //printing the maximum occuring word
    cout << "The most occuring word is: " << endl;
    cout << arr[index] << endl;
    return 0;
}