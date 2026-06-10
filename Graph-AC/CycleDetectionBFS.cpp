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

    //display tree 
    void displayGraph()
    {
        for(int i=0; i<v; i++)
        {
            cout << i << " -> ";
            for(int ele: l[i])
            {
                cout << ele << ", ";
            }
            cout << endl;
        }

    }

    bool cycleBFS(int src, vector<bool> & visited)
    {
        queue<pair<int,int>> q;
        q.push({src, -1});
        visited[src] = true;

        while(q.size() > 0)
        {
            int u = q.front().first;
            int parU = q.front().second;
            q.pop();

            for(int ele: l[u])
            {
                if(!visited[ele])
                {
                    visited[ele] = true;
                    q.push({ele, u});
                }
                else if(ele != parU)
                {
                    return true;
                }
            }
        }
        return false;
    }

    bool helper()
    {
        vector<bool> visited(v, false);
        for(int i=0; i<v; i++)
        {
            if(!visited[i])
            {
                if(cycleBFS(i, visited)) return true;
            }
        }
        return false;
    }

};
int main()
{
    Graph g(7);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(3,2);
    g.addEdge(2,4);
    g.addEdge(4,6);
    g.addEdge(4,5);
    g.addEdge(5,6);
    
    g.displayGraph();
    cout << g.helper() << endl;
}