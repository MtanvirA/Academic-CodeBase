#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int n, t;
    cin >> n >> t;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i] ;
    }

    bubbleSort(arr, n);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    // int sum = 0;
    // int count = 0;


    // for(int i=0; i<n; i++)
    // {
    //     sum += arr[i];
    //     if(sum>t) break;
    //     count++;
    // }

    // cout << count;
}