#include<iostream>
#include<queue>
#include<vector>

using namespace std;

class Edge{
    public:
    int v;
    int wt;

    Edge(int v, int wt)
    {
        this->v = v;
        this->wt = wt;
    }


};

void dijkstra(int src,  vector<vector<Edge>> g, int v)
{
    vector<int> dist(v, INT_MAX);
    dist[src] = 0;

    priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, src});




}

int main()
{
    int v;
    cout << "Enter the number of vertices: ";
    cin >> v;

    vector<vector<Edge>> g(v);

    g[0].push_back(Edge(1,2));
    g[0].push_back(Edge(2,4));

    g[1].push_back(Edge(2,1));
    g[1].push_back(Edge(3,7));

    g[2].push_back(Edge(4,3));

    g[3].push_back(Edge(5,1));

    g[4].push_back(Edge(3,2));
    g[4].push_back(Edge(5,5));

    dijkstra(0, g, v);


}