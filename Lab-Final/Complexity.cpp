#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
    int n = 1000000;

    vector<int> arr(n);

    // Fill array with sorted values
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    int target = n; // search last element

    // ---------------- Linear Search ----------------
    auto start1 = high_resolution_clock::now();

    int pos1 = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            pos1 = i;
            break;
        }
    }

    auto end1 = high_resolution_clock::now();

    auto linearTime =
        duration_cast<microseconds>(end1 - start1);

    // ---------------- Binary Search ----------------
    auto start2 = high_resolution_clock::now();

    int left = 0;
    int right = n - 1;
    int pos2 = -1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == target)
        {
            pos2 = mid;
            break;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    auto end2 = high_resolution_clock::now();

    auto binaryTime =
        duration_cast<microseconds>(end2 - start2);

    // Output
    cout << "Linear Search Position: " << pos1 << endl;
    cout << "Linear Search Time: "
         << linearTime.count() << " microseconds" << endl;

    cout << "Binary Search Position: " << pos2 << endl;
    cout << "Binary Search Time: "
         << binaryTime.count() << " microseconds" << endl;

    return 0;
}