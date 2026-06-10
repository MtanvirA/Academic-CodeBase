#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;
class Graph
{
    //number of vertices
    int v;
    //list to hold the neighbours
    list<int> *l;

    public:
    Graph(int v)
    {
        this->v = v;
        //resizing the list
        l = new list<int>[v];
    }

    // adding the edges
    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    // BFS Traversal
    //logic:
    // Push source
    // Mark visited
    // While queue not empty:
    // Take front
    // Print
    // Visit neighbours
    void bfs()
    {
        //queue 
        queue<int> q;
        //visited array to track the traversal
        vector<bool> visited(v, false);

        //initialization for the source node
        q.push(0);
        visited[0] = true;

        //as long as we have element in the queue
        while(q.size() > 0)
        {
            //take the first element in queue
            int u = q.front();
            q.pop();

            //print that
            cout << u << " ";

            //visiting the neighbours
            for(int ele: l[u])
            {
                // if not visited then mark visited and push into the queue
                if( !visited[ele])
                {
                    visited[ele] = true;
                    q.push(ele);
                }
            }
        }
        cout << endl;

    }

};
int main()
{
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(3,4);
    
    g.bfs();
}