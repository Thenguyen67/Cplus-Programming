#include <iostream>
#include <vector>
using namespace std;

class Graph 
{
private:
    int V; 
    vector<vector<int>> adj; 

public:
    Graph(int v) 
    {
        V = v;
        adj.resize(V);
    }

    void addEdge(int u, int v) 
    {
        if (u >= 0 && u < V && v >= 0 && v < V) 
        {
            adj[u].push_back(v);
            adj[v].push_back(u);
        } else 
        {
            cout << "Invalid vertices!" << endl;
        }
    }

    void printGraph() 
    {
        cout << "\nGraph adjacency list:\n";
        for (int i = 0; i < V; i++) 
        {
            cout << "Vertex " << i << ": ";
            for (int neighbor : adj[i]) 
            {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
};

int main() 
{
    int vertices;
    cout << "Enter number of vertices: ";
    cin >> vertices;

    Graph g(vertices);

    int choice;
    do 
    {
        cout << "\n====== Graph Menu ======\n";
        cout << "1. Add an edge\n";
        cout << "2. Print the graph\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
        case 1: 
            int u, v;
            cout << "Enter two vertices (u v): ";
            cin >> u >> v;
            g.addEdge(u, v);
            break;

        case 2:
            g.printGraph();
            break;

        case 0:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    }
     while (choice != 0);
}
