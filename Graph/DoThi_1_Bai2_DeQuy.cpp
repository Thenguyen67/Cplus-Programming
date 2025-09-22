#include<iostream>
#include<vector>
#include<locale>
using namespace std ;

class graph 
{
    private :

    int V ;
    vector<vector<int>> adj ; 

    void DFS_function(int start, vector<bool>&visited)
    {
        visited[start] = true ; 
        cout << start << " " ;
        for(int index : adj[start]) // Đây là iterator
        // Trong vòng lặp này vế bên phải ":" không thay đổi , còn bên trái sẽ chạy index từ 0, 1, 2, 3, ...
        {
            if(!visited[index]) DFS_function(index, visited) ;
        }
    }

    public :
    graph(int v)
    {
        int V = v ;
        adj.resize(V) ; 
    }

    void Egde(int u , int v)
    {
        adj[u].push_back(v) ;
        adj[v].push_back(u) ;
    }

    void DFS(int start)
    {
        vector<bool> visited(V, false) ; // Tạo vector kiểu bool tên visited có 5 giá trị false 
                                         // visited = {false, fasle, false, false, false}
        cout << "Duyệt DFS từ đỉnh " << start << " : " ;
        DFS_function(start, visited) ;   
        cout << endl ;
    }

};
int main()
{
    graph g(5) ;   // Ta có 5 vector 
    g.Egde(0, 1) ; // adj[0] = {1}
    g.Egde(0, 2) ; // adj[0] = {1, 2}
    g.Egde(1, 3) ; // adj[1] = {0, 3}
    g.Egde(2, 4) ; // adj[2] = {4}
                   // adj[3] = {1}
                   // adj[4] = {2}

    g.DFS(0) ;     // Bắt đầu đi qua các đỉnh , bắt đầu từ đỉnh 0 

    system("chcp 65001 > nul") ;
}
