#include<iostream>
#include<list>

using namespace std;

class Graph{
    int v;
    list<int> *l;
public:
    Graph(int v)
    {
        this->v = v;
        l = new list<int> [v];
    }

    void addEdge(int s, int d)
    {
        l[s].push_back(d);
        l[d].push_back(s);
    }

    void printGraph()
    {
        for(int i=0; i<v; i++)
        {
            cout << i << " : ";
            for(int neigh: l[i])
            {
                cout << neigh << " ";
            }
            cout << endl;
        }
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

    g.printGraph();
}