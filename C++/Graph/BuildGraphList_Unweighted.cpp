#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<int>> graph;
int v; //no of vertices

void add_edge(int src, int des, bool bi_dir = true)
{
    graph[src].push_back(des);
    if(bi_dir)
    {
        graph[des].push_back(src);
    }
}
void display()
{
    for(int i=0; i<graph.size(); i++)
    {
        cout << i << " -> ";
        for(auto el: graph[i])
        {
            cout << el << " , ";
        }
        cout << endl;
    }
}
int main()
{
    cout << "No of vertices: " << endl;
    cin >> v;
    graph.resize(v, list<int>());
    int e;
    cout << "Enter no of edges: " << endl;
    cin >> e;
    while(e--)
    {
        int s, d;
        cout << "Enter the source and destination: " << endl;
        cin >> s >> d;
        add_edge(s,d);
    }
    display();


}