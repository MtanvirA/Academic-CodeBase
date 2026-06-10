#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int l, a, b;
        cin >> l >> a >> b;
        int start1 = a;
        int start2 = a+b;
        
        int max = (a+b)%l;

        while(start2!=start1)
        {
            start2 = (start2+b)%l;
            if(start2>max) max = start2;
        }
        
        cout << max << endl;


    }
}