#include<iostream>
#include<vector>
#include <locale>
using namespace std ;

class graph
{
    private :

    int V ;
    vector<vector<int>> adj ;

    void DFSUtil(int v , vector<bool>&visited)
    {
        visited[v] = true ;
        cout << v << " " ;
        for(int u : adj[v])
        {
            if(!visited[u])
            DFSUtil(u, visited) ;
        }
    }
    public :
    
    graph(int v)
    {
        V = v ;
        adj.resize(V) ;
    }
    void addEdge(int u , int v)
    {
        adj[u].push_back(v) ;
        adj[v].push_back(u) ;
    }

    void DFS(int start)
    {
        vector<bool>visited(V , false) ;
        cout << "Duyệt DFS từ đỉnh " << start << " : " ;
        DFSUtil(start , visited) ;
        cout << endl ;
    }
};
int main()
{
    graph g(5) ;
    g.addEdge(0, 1) ;
    g.addEdge(0, 2) ;
    g.addEdge(1, 3) ;
    g.addEdge(2, 4) ;
    g.DFS(0) ;

    system("chcp 65001 > nul") ;
}