#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    
    int result = 1;
    for(int i=1; i<=num; i++)
    {
        result = result * i;
        cout << result << endl;
    }

    // cout << "Factorial of the number is: " << result << endl;
}