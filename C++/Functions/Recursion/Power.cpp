 #include<iostream>
using namespace std;

int power(int a, int b){
    if(b==1) return a;
    return a*power(a, b-1);
}

int main()
{
    int a, b; 
    cout << "Enter the base: ";
    cin >> a;
    cout << "Enter the power: ";
    cin >> b;
    
    cout << b << " raised to the power of " << a << " is: " << power(a, b);
}