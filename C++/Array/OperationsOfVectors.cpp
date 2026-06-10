#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v; // initialization of the vector
    // assigning the values
    v.push_back(5);
    v.push_back(8);
    v.push_back(7);
    v.push_back(9);
    v.push_back(2);


    // printing the vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.capacity();

    v.pop_back();
    v.pop_back();

    cout << endl;
    // printing the vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.capacity();
}