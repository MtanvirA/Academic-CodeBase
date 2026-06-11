#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Edge{
public:
    int v;
    int cost;

    Edge(int v, int cost)
    {
        this->cost = cost;
        this->v = v;
    }
};

void prim(int v, vector<vector<Edge>>& g, int src){
    //visited array for keeping track of my journey
    vector<bool> visited(v, false);

    //priority queue for finding the path with minimum cost
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    //variable for storing the cost
    int minCost = 0;
    //pushing the source node into the priority queue
    pq.push({0,src});

    //while the queue is not empty
    while(!pq.empty())
    {
        //access the first element
        auto curr = pq.top();
        pq.pop();
        //initizlize the parameters
        int cost = curr.first;
        int u = curr.second;
        //if previously visited then skip
        if(visited[u]) continue;
        //mark it visited
        visited[u] = true;
        //add cost
        minCost += cost;
        //visit it's neighbours
        for(Edge e : g[u])
        {
            //if the neighbour is not visited then push into the queue
            if(!visited[e.v])
            {
                pq.push({e.cost, e.v});
            }
        }
    }

    //finally print the answer
    cout << "Minimum cost: " << minCost << endl;
}

int main()
{
    int v = 4;
    vector<vector<Edge>> graph(v);

    graph[0].push_back(Edge(1,4));
    graph[1].push_back(Edge(0,4));

    graph[0].push_back(Edge(2,6));
    graph[2].push_back(Edge(0,6));

    graph[0].push_back(Edge(3,2));
    graph[3].push_back(Edge(0,2));

    graph[1].push_back(Edge(3,5));
    graph[3].push_back(Edge(1,5));

    graph[2].push_back(Edge(3,3));
    graph[3].push_back(Edge(2,3));

    prim(v, graph, 0);
}