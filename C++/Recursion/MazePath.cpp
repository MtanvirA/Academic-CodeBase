#include<iostream>
using namespace std;
int mazeWays(int sr, int sc, int er, int ec)
{
    if(sr > er || sc > ec)
    {
        return 0;
    }
    if(sr == er && sc == ec)
    {
        return 1;
    }
    int rightWays = mazeWays(sr, sc+1, er, ec);
    int downWays = mazeWays(sr+1, sc, er, ec);
    return rightWays+downWays;
}
void mazePath(int sr, int sc, int er, int ec, string str)
{
    if(sr>er || sc>ec) return;
    if(sr == er && sc == ec) 
    {
        cout << str << endl;
    }
    //right ways
    mazePath(sr, sc+1, er, ec, str+'R');
    //down ways 
    mazePath(sr+1, sc, er, ec, str+'D');
}
int main()
{
    int a, b;
    cout << "Enter the number of row and columns of the maze: ";
    cin >> a >> b;
    int ways = mazeWays(0, 0, a-1, b-1);
    cout << "The number of paths are: " << ways << endl;
    cout << "The paths are: " << endl;
    mazePath(0, 0, a-1, b-1, "");
    return 0;
}