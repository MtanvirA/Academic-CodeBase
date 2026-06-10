#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    
    int result = 1;
    for(int i=num; i>=1; i--)
    {
        result = result * i;
    }

    cout << "Factorial of the number is: " << result << endl;
}