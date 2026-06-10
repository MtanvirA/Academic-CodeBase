#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    bool flag = true;
    for(int i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            flag = false;
            break;
        }
    }
    if(num == 1) cout << "The number is not prime nor composit!" << endl;
    else if(flag == true) cout << "The number is prime." << endl;
    else cout << "The number is composit." << endl;
}