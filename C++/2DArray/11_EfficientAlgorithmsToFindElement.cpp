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

// function to flip the grid to obtain the maximun binary sum
void flipGrid(vector<vector<int>> &grid)
{
    // flipting the rows
    for (int i = 0; i < grid.size(); i++)
    {
        if (grid[i][0] == 0)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 0)
                    grid[i][j] = 1;
                else
                    grid[i][j] = 0;
            }
        }
    }
}

//function to find the element
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    //starting position of the pointer
    int i = 0;
    int j = matrix[0].size() - 1;

    while (i < matrix.size() && j >= 0) //condition of validity
    {
        //target found condition
        if (matrix[i][j] == target)
        {
            cout << "Found!!!\nPosition in the grid: " << "[ " << i+1 << " , " << j+1 << " ]" << endl;
            return true;
        }

        //going left for smaller target
        else if (matrix[i][j] > target)
            j--;
        else //going down for greater target
            i++;
    }
    cout << "Not found!";
    return false;
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
    int target;
    cout << "Enter the target element: ";
    cin >> target;
    cout << endl;
    showGrid(grid);

    //finding the target element
    bool state = searchMatrix(grid, target);
    return 0; // finishing off
}