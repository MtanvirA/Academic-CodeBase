#include<iostream>
#include<list>
#include<vector>
#include<queue>
#include<stack>
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

    void tsortDFS(int src, vector<bool>& visited, stack<int>& st)
    {
        visited[src] = true;

        for(int ele: l[src])
        {
            if(!visited[ele]) tsortDFS(ele, visited, st);
        }

        st.push(src);
    }

    void helper()
    {
        vector<bool> visited(v,false);
        stack<int> st;

        for(int i=0; i<v; i++)
        {
            if(!visited[i])
            {
                tsortDFS(i, visited, st);
            }
        }

        while(st.size()>0)
        {
            int num = st.top();
            cout << num << " ";
            st.pop();
        }
        cout << endl;
    }
    

    

};
int main()
{
    Graph g(6);
    g.addEdge(5,0);
    g.addEdge(5,2);
    g.addEdge(2,3);
    g.addEdge(3,1);
    g.addEdge(4,0);
    g.addEdge(4,1);
    
    g.displayGraph();
    g.helper();
    
}