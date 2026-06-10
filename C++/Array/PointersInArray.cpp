#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 5, 6, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int *ptr = arr;

    for (int i = 0; i < n; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }

    
}