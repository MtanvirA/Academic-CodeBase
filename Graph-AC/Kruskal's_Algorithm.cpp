#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int find(int x, vector<int> &parent)
{
    // if x is the leader of its group
    if (parent[x] == x)
        return x;

    // find the leader recursively
    return parent[x] = find(parent[x], parent);
}

void kruskal(int vertices, vector<vector<int>> &edges)
{
    // Step 1: Sort edges according to weight
    sort(edges.begin(), edges.end());

    // Step 2: Create parent array
    vector<int> parent(vertices);

    // Initially everyone is their own leader
    for (int i = 0; i < vertices; i++)
    {
        parent[i] = i;
    }

    int totalCost = 0;

    cout << "Edges in MST:\n";

    // Step 3: Process all edges
    for (auto edge : edges)
    {
        int wt = edge[0];
        int u = edge[1];
        int v = edge[2];

        // Find leader of u
        int leaderU = find(u, parent);

        // Find leader of v
        int leaderV = find(v, parent);

        // Different groups
        if (leaderU != leaderV)
        {
            // Take this edge
            cout << u << " - " << v
                 << " : " << wt << endl;

            totalCost += wt;

            // Merge groups
            parent[leaderV] = leaderU;
        }
    }

    cout << "Total Cost = "
         << totalCost << endl;
}

int main()
{
    int vertices = 4;

    vector<vector<int>> edges =
        {
            {10, 0, 1},
            {6, 0, 2},
            {5, 0, 3},
            {15, 1, 3},
            {4, 2, 3}};

    kruskal(vertices, edges);
}