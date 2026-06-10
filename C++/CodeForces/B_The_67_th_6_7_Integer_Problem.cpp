#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int arr[7];
        for(int i=0; i<7; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr+7);
        int sum = 0;
        for(int i=0; i<6; i++)
        {
            sum += (-1)*arr[i];
        }

        sum+= arr[6];
        cout << sum << endl;
    }
}