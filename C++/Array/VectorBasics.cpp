#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v; // initialization of the vector
    // assigning the values
    v.push_back(5);
    cout << v.size() << " ";
    cout << v.capacity() << endl;
    v.push_back(8);
    cout << v.size() << " ";
    cout << v.capacity() << endl;
    v.push_back(7);
    cout << v.size() << " ";
    cout << v.capacity() << endl;
    v.push_back(9);
    cout << v.size() << " ";
    cout << v.capacity() << endl;
    v.push_back(2);
    cout << v.size() << " ";
    cout << v.capacity() << endl;

    // printing the vector
    cout << endl;
    cout << v[0] << " ";
    cout << v[1] << " ";
    cout << v[2] << " ";
    cout << v[3] << " ";
    cout << v[4] << " ";
}