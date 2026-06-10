#include <iostream>
#include <vector>
using namespace std;
void largestElement(vector<int> &v)
{
    int index = -1;
    int max = v[0];
    int i = 0;
    while (i < v.size())
    {
        if (v[i] > max)
        {
            max = v[i];
            index = i;
        }
        i++;
    }
    cout << "The largest element is: " << max << endl;
    cout << "Index of the largest element is: " << index + 1 << endl;
}
int main()
{
    vector<int> v = {14, 5, 78, 25, 4, 5, 4, 23, 2, 68};
    largestElement(v);
    return 0;
}