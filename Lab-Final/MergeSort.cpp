#include <iostream>
#include <vector>

using namespace std;

// Function to merge two sorted halves
void merge(vector<int>& arr, int left, int mid, int right)
{
    // Size of left half
    int n1 = mid - left + 1;

    // Size of right half
    int n2 = right - mid;

    // Temporary arrays
    vector<int> L(n1);
    vector<int> R(n2);

    // Copy left half
    for(int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
    }

    // Copy right half
    for(int i = 0; i < n2; i++)
    {
        R[i] = arr[mid + 1 + i];
    }

    int i = 0; // pointer for L
    int j = 0; // pointer for R
    int k = left; // pointer for original array

    // Compare elements and put smaller one first
    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }

        k++;
    }

    // Copy remaining elements from L
    while(i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements from R
    while(j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge Sort function
void mergeSort(vector<int>& arr, int left, int right)
{
    // Base Case
    if(left >= right)
    {
        return;
    }

    // Find middle index
    int mid = left + (right - left) / 2;

    // Sort left half
    mergeSort(arr, left, mid);

    // Sort right half
    mergeSort(arr, mid + 1, right);

    // Merge both sorted halves
    merge(arr, left, mid, right);
}

int main()
{
    vector<int> arr = {8, 3, 5, 4, 7, 6, 1, 2};

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted Array: ";

    for(int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}