#include<iostream>
using namespace std;

void change(int arr[], int n)
{
    arr[0] = 100;
}

void display(int arr[], int n){
    // arr[2] = 10;
    for(int i = 0; i<n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[] = {1, 4, 5, 6, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    cout << endl;
    change(arr, n);
    display(arr, n);

}