#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        int extra = 0;
        int rows = num%10;
        int digits = 0;
        while(num>0)
        {
            num /= 10;
            digits++;
        }
        if(digits == 1){
            extra = 1;
        }
        else if(digits == 2)
        {
            extra = 3;
        }
        else if(digits == 3)
        {
            extra = 6;
        }
        else 
        {
            extra = 10;
        }

        cout << (rows-1)*10 + extra << endl;
    }
}