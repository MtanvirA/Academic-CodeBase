#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 8, 10, 33, 50, 55, 63, 68, 75, 90};
    int size = 10;
    int target = 33;
    int low = 0;
    int high = size - 1;
    int mid;
    bool flag = false;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            cout << arr[mid - 1];
            flag = true;
            break;
            
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (flag == false)
    {
        cout << arr[low - 1];
    }
}