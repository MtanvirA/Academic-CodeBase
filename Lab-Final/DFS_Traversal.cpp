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

    //DFS Traversal
    //Logic:
    /*
    1. print the source
    2. mark visited
    3. visit neighbours
    4. call the dfs funciton again for the neighbours 
    */
    void dfs(int src, vector<bool>& visited)
    {
        // printing the source
        cout << src << " ";
        //marking it true
        visited[src] = true;

        //visiting the neighbours
        for(int ele: l[src])
        {
            //if neighbour not visited, then call dfs for the that neighbour
            if(!visited[ele])
            {
                //recursion
                dfs(ele, visited);
            }
        }
    }

    //manage the call function from the main function
    void dfsHelper()
    {
        int src = 0;
        vector<bool> visited(v, false);

        dfs(src, visited);
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
    
    g.dfsHelper();

}