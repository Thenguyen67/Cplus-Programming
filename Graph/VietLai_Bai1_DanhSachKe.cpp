#include<iostream>
#include<vector>
using namespace std ;

class graph
{
    private :

    int V ; // v = vertex : Dinh 
    vector<vector<int>> adj ; // adj = adjacency : Ke

    public :

    graph(int v)
    {
        V = v ;
        adj.resize(v) ;
    }

    void addEgde(int u , int v)
    {
        if(u >= 0 && u < V && v >= 0 && v < V)
        {
            adj[u].push_back(v) ;
            adj[v].push_back(u) ;
        }
        else
        {
            cout << "Loi !" << endl ;
        }
    }

    void printGraph()
    {
        cout << "Graph list : " << endl ;
        for(int i = 0 ; i < V ; i++)
        {
            cout << "Vertex " << i << " : " ;
            for(int n : adj[i]) cout << n << " " ;  
            cout << endl ;
        } 
    }
};

int main()
{
    int numberOfVertices ;
    cout << "Nhap vao so dinh trong do thi : " ;
    cin >> numberOfVertices ;

    graph g(numberOfVertices) ;
    int choice ;

    do 
    {
        cout << "\n1. Nhap vao canh " << endl ;
        cout << "2. In ra do thi" << endl ;
        cout << "0. Ket thuc chuong trinh" << endl ;
        cout << "Lua chon cua ban : " ;
        
        cin >> choice ;
        switch(choice)
        {
            case 1 : 
            {
                int u , v ;
                cout << "Nhap vao hai dinh u va v : " ;
                cin >> u >> v ;
                g.addEgde(u , v) ;
                break ;
            }

            case 2 :
            {
                g.printGraph() ;
                break ;
            }

            case 0 : cout << "Ket thuc chuong trinh" << endl ;

            default : cout << "Nhap sai du lieu" << endl ;
        }
    }
    while(choice != 0) ;
}