#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
int v;
vector<list<int>> graph;
unordered_set<int> visited;

void add_edges(int s, int d, bool bi = true)
{
    graph[s].push_back(d);
    if(bi)
    {
        graph[d].push_back(s);
    }
}

void display_graph()
{
    for(int i = 0; i<graph.size(); i++)
    {
        cout << i << " -> ";
        for(auto ele: graph[i])
        {
            cout << ele << " , ";
        }
        cout << endl;
    }
    cout << endl;
}

bool dfs(int src, int des)
{
    if(src == des) return true;
    visited.insert(src);
    for(auto ele: graph[src])
    {
        if(! visited.count(ele))
        {
            bool result = dfs(ele, des);
            if(result) return true;
        }
    }
    return false;
}

bool path(int src, int des)
{
    return dfs(src,des);
}

int main()
{
    cout << "Enter no of vertices: ";
    cin >> v;
    graph.resize(v, list<int>());
    int e;
    cout << "Enter no of edges: ";
    cin >> e;
    visited.clear();
    while(e--)
    {
        int s, d;
        cout << "Enter the source and destination: ";
        cin >> s >> d;
        add_edges(s,d);
    }
    display_graph();
    int src, des;
    cout << "Enter source and destination: ";
    cin >> src >> des;
    if(path(src, des))
    {
        cout << "Yes, road exists!" << endl;
    }
    else{
        cout << "Alas" << endl;
    }

}