#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1, 4, 5};
    int* ptr = arr;
    cout << ptr << endl;

    // cout << &arr[0] << endl;

    // cout << *ptr << endl;

    // cout << ptr[0] << endl;

    for(int i=0; i<3; i++)
    {
        cout << ptr[i] << endl;
    }
}