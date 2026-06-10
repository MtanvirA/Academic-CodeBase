#include<iostream>
#include<vector>
using namespace std;

// function to generate the pascal's triangle
vector< vector<int> > generate(int numRows)
{
    //delaclaring the vector 
    vector< vector<int> > v;

    //constructing the pascal triangle
    for(int i=0; i<numRows; i++)
    {
        //constructing the frame of the pascal triangle
        vector<int> arr(i+1);
        v.push_back(arr);

        //putting the values in the frame
        for(int j=0; j<=i; j++)
        {
            if(j==0 || i==j)
            {
                v[i][j] = 1;
            }
            else
            {
                v[i][j] = v[i-1][j] + v[i-1][j-1];
            }
        }
    }
    return v;
}

//function to print 2D vector
void printPascal(vector< vector<int> > v)
{
    int n = v.size();
    cout << "The Pascal's Triangle is: " << endl;
    for(int i=0; i<n; i++)
    {
        for(int j=n-1-i; j>=0; j--)
        {
            cout << "  ";
        }
        for(int j=0; j<v[i].size(); j++)
        {
            cout << v[i][j] << "   ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    //taking input of the rows
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    //constructing the main vector
    vector< vector<int> > v;
    //constructing the pascal triangle via calling the function
    v = generate(n);

    //printing the pascal triangle
    printPascal(v);

    return 0;
}