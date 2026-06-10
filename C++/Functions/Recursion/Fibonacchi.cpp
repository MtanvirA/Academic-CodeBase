#include<iostream>
using namespace std;

int fibonacchi(int n){
    if(n==1 || n==2) return 1;
    return fibonacchi(n-1) + fibonacchi(n-2);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << fibonacchi(n);
}