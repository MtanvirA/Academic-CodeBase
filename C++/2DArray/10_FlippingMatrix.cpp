#include <iostream>
#include <vector>
using namespace std;

// function to take input in the grid
void inputGrid(vector<vector<int>> &grid, int a, int b)
{
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < a; i++)
    {
        vector<int> arr;
        for (int j = 0; j < b; j++)
        {
            int num;
            cin >> num;
            arr.push_back(num);
        }
        grid.push_back(arr);
    }
}

// function to show the grid
void showGrid(vector<vector<int>> &grid)
{
    cout << "The grid is: " << endl;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

//function to flip the grid to obtain the maximun binary sum
void flipGrid(vector< vector<int> > &grid)
{
    //flipting the rows
    for(int i=0; i<grid.size(); i++)
    {
        if(grid[i][0]==0)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j] == 0) grid[i][j] = 1;
                else grid[i][j] = 0;
            }
        }
    }

    //fliping the columns
    for(int j=0; j<grid[0].size(); j++)
    {
        int noo = 0; 
        int noz = 0;
        for(int i=0; i<grid.size(); i++)
        {
            if(grid[i][j] == 0) noz++;
            else noo++;
        }
        
        if(noz>noo)
        {
            for(int i=0; i<grid.size(); i++)
            {
                if(grid[i][j] == 0) grid[i][j] = 1;
                else grid[i][j] = 0;
            }
        }
    }
}

//function to calculate the decimal sum of the grid
int gridSum(vector< vector<int> > grid)
{
    int sum = 0; 
    for(int i=0; i<grid.size(); i++)
    {
        int mul = 1;
        for(int j=grid[0].size()-1; j>=0; j--)
        {
            sum += grid[i][j]*mul;
            mul *= 2;
        }
    }
    return sum;
}

int main()
{
    // taking input of the parameters of the grid
    int a;
    int b;
    cout << "Enter the row of the grid: ";
    cin >> a;
    cout << "Enter the column of the grid: ";
    cin >> b;
    vector<vector<int>> grid;

    // taking the input  of the grid
    inputGrid(grid, a, b);
    // showing the grid
    cout << endl;
    showGrid(grid);

    //fliping the grid
    flipGrid(grid);

    //show the grid after the flip
    showGrid(grid);

    //calculating the sum
    int sum = gridSum(grid);
    cout << "The maximum possible decimal sum of the grid is: " << sum << endl;

    return 0;
}