#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    //string the numbers as string in a vector
    vector<string> str;
    str.push_back("00243");
    str.push_back("00043");
    str.push_back("01034");
    str.push_back("00476");
    str.push_back("00135");
    //initializing the important variables to store the maximum integer and the index of it
    int index = 0; 
    int maxNum = stoi(str[0]);
    //loop to cycle through every element of the vector
    for(int i = 1; i<str.size(); i++)
    {
        int temp = stoi(str[i]);
        if(temp > maxNum)
        {
            maxNum = temp;
            index = i;
        }
    }
    //printing the maximum element as original string
    cout << "The bighest number is: " << str[index] << endl;
}