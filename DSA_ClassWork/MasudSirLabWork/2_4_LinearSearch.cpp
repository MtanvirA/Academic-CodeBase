#include <iostream>
#include <vector>
using namespace std;
int linearSearch(vector<int> &v, int target)
{
    bool found = false;
    int index = -1;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] == target)
        {
            found = true;
            index = i;
        }
        if (found == true)
            break;
    }
    return index + 1;
}
int main()
{
    vector<int> v = {14, 5, 78, 25, 4, 5, 4, 23, 2, 68};
    int target;
    cout << "Enter the target element: ";
    cin >> target;
    int index = linearSearch(v, target);
    if (index == -1)
        cout << "Item not found!" << endl;
    else
        cout << "Item found, index: " << index << endl;
    return 0;
}