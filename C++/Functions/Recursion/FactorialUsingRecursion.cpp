#include<iostream>
using namespace std;
int recursion(int n){
    if(n==0) return 1;
    return n*recursion(n-1);
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << recursion(n);
}