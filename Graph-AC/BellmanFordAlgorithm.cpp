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

void bellmanFord(int src,  vector<vector<Edge>> g, int v)
{
    //empty vector to store the distances
    vector<int> dist(v, INT_MAX);
    dist[src] = 0;

    //we have to perform the whole process for v-1 times
    for(int i=0; i<v-1; i++)
    {
        //we have to access every vertices of the graph
        for(int u=0; u<v; u++)
        {
            //now he have to access the edges associated with each of the vertices
            for(Edge e: g[u])
            {
                //performing edge relaxation
                if(dist[e.v] > dist[u] + e.wt)
                {
                    dist[e.v] = dist[u] + e.wt;
                }
            }
        }
    }

    //now just printing the final result
    cout << "The shortest distance from " << src << " to all other vertices: " << endl;
    for(int d: dist)
    {
        cout << d << " ";
    }
    cout << endl;
}

int main()
{
    int v=5;
    

    vector<vector<Edge>> g(v);

    g[0].push_back(Edge(1,2));
    g[0].push_back(Edge(2,4));

    g[1].push_back(Edge(4,-1));
    g[1].push_back(Edge(2,-4));

    g[2].push_back(Edge(3,2));

    g[3].push_back(Edge(4,4));

    bellmanFord(0, g, v);


}