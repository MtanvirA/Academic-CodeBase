#include<iostream>
using namespace std;
int stairPath(int n)
{
    if(n==1) return 1;
    else if(n==2) return 2;
    else return stairPath(n-1)+stairPath(n-2);

}
int main()
{
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;
    int result = stairPath(n);
    cout << "The number of ways it can climb up the stair is: " << result; 
}