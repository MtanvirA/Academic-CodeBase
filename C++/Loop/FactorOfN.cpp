#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    int fac = 1;
    for(int i=1; i<n; i++)
    {
        if(n%i==0) fac = i;
    }
    cout << "The highest factor of " << n << " is: " << fac << endl;
}