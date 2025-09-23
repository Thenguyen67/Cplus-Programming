// Bài 1: Biểu diễn đồ thị bằng danh sách kề
// • Nhập số đỉnh, số cạnh từ bàn phím.
// • Cho phép nhập từng cạnh và in danh sách kề ra màn hình.
#include <iostream>
#include <vector>
#include <locale>
using namespace std ;

class graph
{
private:
    int V ;
    vector<vector<int>> adj ;

public :
    graph(int v)
    {
        V = v;
        adj.resize(V) ;
    }

    void addEgde(int u, int v)
    {
        adj[u].push_back(v) ;
        adj[v].push_back(u) ;
    }

    void printGraph()
    {
        for (int i = 0; i < V; i++)
        {
            cout << "Đỉnh " << i << " : " ;
            for (int x : adj[i])
                cout << x << " " ;
            cout << endl ;
        }
    }
};

int main()
{
    system("chcp 65001 > nul") ;

    // • Nhập số đỉnh, số cạnh từ bàn phím.
    int m, n;
    cout << "Nhập vào số đỉnh và số cạnh : " ;
    cin >> m >> n ;

    graph g(m) ;

    int choice ;
    // • Cho phép nhập từng cạnh và in danh sách kề ra màn hình.
    do
    {
        cout << "1. Nhập cạnh của hai đỉnh u, v" << endl ;
        cout << "2. In ra danh sách kề" << endl ;
        cout << "0. Kết thúc chương trình" << endl ;
        cout << "Lựa chọn của bạn : ";
        cin >> choice ;

        switch (choice)
        {
        case 1 : 
        {
            int u, v;
            for (int i = 1; i <= n; i++)
            {
                cout << "Nhập vào cạnh " << i << " : " ;
                cin >> u >> v ;
                g.addEgde(u, v) ;
                cout << endl ;
            }
            break ;
        }

        case 2 :
        {
            g.printGraph() ;
            break ;
        }

        case 0 :
            cout << "Kết thúc chương trình" ;
            break;
        default :
            cout << "Nhập sai ! Vui lòng nhập lại" << endl ;
        }
    } while (choice != 0) ;
}