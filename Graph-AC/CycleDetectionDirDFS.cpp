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
        l[u].push_back(v); //only the directed part
        
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

    bool cycleDFS(int src, vector<bool>& visited, vector<bool>& path)
    {
        visited[src] = true;
        path[src] = true;

        for(int ele: l[src])
        {
            if(!visited[ele])
            {
                if(cycleDFS(ele, visited, path))
                {
                    return true;
                }
            }
            else if(path[ele])
            {
                return true;
            }
        }

        path[src] = false;
        return false;
    }

    bool helper()
    {
        vector<bool> visited(v, false);
        vector<bool> path(v, false);

        for(int i=0; i<v; i++)
        {
            if(!visited[i])
            {
                if(cycleDFS(i, visited, path))
                {
                    return true;
                }
            }
        }
        return false;
    }

    

};
int main()
{
    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,1);
    g.addEdge(3,4);
    g.addEdge(4,5);
    
    g.displayGraph();
    cout << g.helper() << endl;
    
}