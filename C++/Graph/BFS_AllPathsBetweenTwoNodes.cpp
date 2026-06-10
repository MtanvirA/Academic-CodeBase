#include <iostream>
#include <vector>
#include <unordered_set>
#include <list>

using namespace std;

vector<list<int>> graph; // actual graph
int v;                   // total vertices
unordered_set<int> visited; //keep track of the visited vertices
vector<vector<int>> aPaths; //store all the possible paths

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
    for(int i=0; i<aPaths.size(); i++)
    {
        for(int ele: aPaths[i])
        {
            cout << ele << " ";
        }
        cout<< endl;
    }
}

void dfs_all(int src, int des, vector<int> &routes)
{
    if(src == des) //checking if i am already in the destination
    {
        routes.push_back(src); // current vertices to the path
        aPaths.push_back(routes); // put the path into the total path
        routes.pop_back(); //popping back the current vertices so that we can search is there are more ways of going there
        return;
    }
    visited.insert(src); // mark the current vertices as visited
    routes.push_back(src); // put the current vertices in the path
    for(auto ele: graph[src]) // explore each vertices connected to the current one and see if we can get to the destination with one of them
    {
        if(! visited.count(ele)) // if it is not explore, then go forward
        {
            dfs_all(ele, des, routes);
        }
    }

    visited.erase(src); // after visiting all the vertices connected to the currnet vertices, we erase that from visited so that we can explore it in another way
    routes.pop_back(); //pop it from the route to check more paths
    return;
}

int main()
{
    cout << "No of vertices: ";
    cin >> v;
    graph.resize(v, list<int>());
    int e;
    cout << "No of edges: ";
    cin >> e;
    //visited.clear();
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
    vector<int> routes;
    dfs_all(src, des, routes);
    show_paths();
}