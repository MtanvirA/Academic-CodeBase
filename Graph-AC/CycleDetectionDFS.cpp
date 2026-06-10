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

    bool cycleDFS(int src, int par, vector<bool>& visited)
    {
        visited[src] = true;

        for(int ele: l[src])
        {
            if( !visited[ele] )
            {
                if(cycleDFS(ele, src, visited))
                {
                    return true;
                }
            }
            else if(ele != par) return true;
        }
        return false;
    }

    bool helper()
    {
        int par = -1;
        vector<bool> visited(v,false);
        
        for(int i=0; i<v; i++)
        {
            if(cycleDFS(i, par, visited))
            {
                return true;
            }
        }
        return false;
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
    
    cout << g.helper() << " " << endl;
}