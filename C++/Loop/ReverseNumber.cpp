#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int rnum = 0;
    while(num>0)
    {
        rnum *= 10;
        rnum += num%10;
        num /= 10;
    }

    cout << "The reverse number is: " << rnum;
}