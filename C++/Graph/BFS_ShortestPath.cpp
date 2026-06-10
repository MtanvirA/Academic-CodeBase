#include <iostream>
#include <vector>
#include <unordered_set>
#include <list>
#include <queue>

using namespace std;

vector<list<int>> graph;    // actual graph
int v;                      // total vertices
unordered_set<int> visited; // keep track of the visited vertices
vector<vector<int>> paths;  // store all the possible paths

void add_edges(int st, int des, bool bi = true)
{
    graph[st].push_back(des);
    if (bi)
    {
        graph[des].push_back(st);
    }
}

void display_graph()
{
    cout << "The graph: " << endl;
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << " -> ";
        for (auto ele : graph[i])
        {
            cout << ele << " , ";
        }
        cout << endl;
    }
}

void show_paths()
{
    cout << "All available paths: " << endl;
    for (int i = 0; i < paths.size(); i++)
    {
        for (int ele : paths[i])
        {
            cout << ele << " ";
        }
        cout << endl;
    }
}

void show_dist(vector<int> &dist)
{
    cout << "Distance from source: " << endl;
    for (int ele : dist)
    {
        cout << ele << " ";
    }
    cout << endl;
}

void srt_dist(int src, int des, vector<int> &dist)
{
    queue<int> qu;
    dist.resize(v, INT_MAX);
    dist[src] = 0;
    visited.insert(src);
    qu.push(src);
    while (!qu.empty())
    {
        int curr = qu.front();
        qu.pop();
        for (auto neighbour : graph[curr])
        {
            if (!visited.count(neighbour))
            {
                qu.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr] + 1;
            }
        }
    }
}

int main()
{
    cout << "No of vertices: ";
    cin >> v;
    graph.resize(v, list<int>());
    int e;
    cout << "No of edges: ";
    cin >> e;
    // visited.clear();
    while (e--)
    {
        int st, des;
        cout << "Source and destination of each edges: ";
        cin >> st >> des;
        add_edges(st, des);
    }

    display_graph();
    int src, des;
    cout << "Source and destination: ";
    cin >> src >> des;
    vector<int> dist;
    visited.clear();
    srt_dist(src, des, dist);
    show_dist(dist);
}