// Bài 1: Biểu diễn đồ thị bằng danh sách kề
// • Nhập số đỉnh, số cạnh từ bàn phím.
// • Cho phép nhập từng cạnh và in danh sách kề ra màn hình.

#include<iostream>
#include<vector>
#include<locale> // Chuyển định dạng tiếng Việt cho code 
using namespace std ;

class graph
{
    private :
        int V ;
        vector<vector<int>> adj ; // Tạo các đỉnh và các tập con là đỉnh kề (đi qua)

    public :
        graph(int n)
        {
            V = n ;
            adj.resize(V) ; // Thay đổi kích thước của vector
        }

        void addEgde(int u, int v)
        {
            adj[u].push_back(v) ; // push_back : Thêm phần tử vào vector
            adj[v].push_back(u) ;
        }

        void printGraph()
        {
            cout << endl ;
            for(int i = 0; i < V; i++)
            {
                cout << "Đỉnh " << i << " : " ;
                for(int x : adj[i]) // iterator 
                {
                    cout << x << " " ;
                }
                cout << endl ;
            }
        }
};

int main()
{
    system("chcp 65001 > nul") ; // Thêm vào đầu main để có thể code bằng tiếng Việt 

    int n, m ;
    cout << "Nhập vào số đỉnh và cạnh của đồ thị : " ;
    cin >> n >> m ;

    graph g(n) ;

    int choice ;
    do
    {
        cout << "1. Nhập vào đỉnh u, v của cạnh" << endl ;
        cout << "2. In ra danh sách cách đỉnh đi qua" << endl ;
        cout << "0. Kết thúc chương trình" << endl ;
        cout << "Lựa chọn của bạn : " ;
        cin >> choice ;

        switch(choice)
        {
            case 1 :
            {
                int u, v ;
                for(int i = 0; i < m; i++)
                {
                    cout << "Cạnh thứ " << i << " gồm hai đỉnh : " ;
                    cin >> u >> v ;
                    g.addEgde(u, v) ;
                }
                cout << endl ;
                break ;
            }

            case 2 :
            {
                g.printGraph() ;
                break ;
            }

            case 0 : cout << "Kết thúc chương trình !" ; break ;
            default : cout << "Nhập sai ! Vui lòng nhập lại" << endl ;
        }
    }
    while(choice != 0) ;
}