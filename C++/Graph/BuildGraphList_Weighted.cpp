#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<pair<int,int>>> graph;
int v; //no of vertices

void add_edge(int src, int des, int wt, bool bi_dir = true)
{
    graph[src].push_back({des, wt});
    if(bi_dir)
    {
        graph[des].push_back({des,wt});
    }
}
void display()
{
    for(int i=0; i<graph.size(); i++)
    {
        cout << i << " -> ";
        for(auto el: graph[i])
        {
            cout << "( " << el.first <<"," << el.second << " )";
        }
        cout << endl;
    }
}
int main()
{
    cout << "No of vertices: " << endl;
    cin >> v;
    graph.resize(v, list<pair<int,int>>());
    int e;
    cout << "Enter no of edges: " << endl;
    cin >> e;
    while(e--)
    {
        int s, d, wt;
        cout << "Enter the source and destination and weight: " << endl;
        cin >> s >> d >> wt;
        add_edge(s,d,wt, false);
    }
    display();


}