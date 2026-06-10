#include<iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter the quadrants: " << endl;
    cin >> x >> y;
    if(x==0 and y==0) cout << "Viz" << endl;
    else if(x>0 and y>0) cout << "First Quadrant" << endl;
    else if(x<0 and y>0) cout << "Second Quadrant" << endl;
    else if(x<0 and y<0) cout << "Third Quadrant" << endl;
    else cout << "Fourth Quadrant" << endl;
    

}