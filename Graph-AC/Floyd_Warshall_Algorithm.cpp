#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int INF = 1000000000;
    int v = 4;

    vector<vector<int>> dist =
    {
        {0,   3,   INF, 7},
        {8,   0,   2,   INF},
        {5,   INF, 0,   1},
        {2,   INF, INF, 0}
    };

    // Floyd-Warshall
    for(int k = 0; k < v; k++)
    {
        for(int i = 0; i < v; i++)
        {
            for(int j = 0; j < v; j++)
            {
                if(dist[i][k] != INF &&
                   dist[k][j] != INF)
                {
                    dist[i][j] = min(
                        dist[i][j],
                        dist[i][k] + dist[k][j]
                    );
                }
            }
        }
    }

    cout << "Shortest Distance Matrix:\n";

    for(int i = 0; i < v; i++)
    {
        for(int j = 0; j < v; j++)
        {
            if(dist[i][j] == INF)
                cout << "INF ";
            else
                cout << dist[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}