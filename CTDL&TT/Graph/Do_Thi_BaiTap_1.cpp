// Cho một đồ thị vô hướng có n đỉnh (đánh số từ 1 đến n) và m cạnh. Mỗi đỉnh còn có trọng số riêng.
// Viết chương trình C++ dùng danh sách kề để:

// Nhập n, m. Sau đó nhập m cạnh, mỗi cạnh gồm hai đỉnh u, v.

// Nhập tiếp một mảng trọng số w[1..n], trọng số của mỗi đỉnh.

// Cho một đỉnh xuất phát s, bạn cần tính tổng trọng số nhỏ nhất của một đường đi từ s tới mọi đỉnh khác (nếu có đường đi).

// In ra cho mỗi đỉnh i: nếu đỉnh i không thể tới từ s thì in −1; nếu có thì in tổng trọng số nhỏ nhất (tức là tổng các trọng số của các đỉnh trên đường đi, bao gồm đỉnh i và s).

// Yêu cầu thêm:

// Đường đi tính theo số cạnh (không phải cạnh trọng số) như BFS, nhưng độ “đắt đỏ” là trọng số đỉnh, và bạn cộng trọng số của đỉnh đích lẫn đỉnh xuất phát.

// Đảm bảo chạy được khi n ≤ 10^5, m ≤ 2×10^5.
#include<iostream>
#include<locale>
#include<vector>
using namespace std ;

class graph
{
    private :
    int V ;
    vector<vector<int>> n ;

    public :
    graph(int v)
    {
        V = v ;
        n.resize(V) ;
    }

    void addEdge(int u , int v) 
    {
        n[u].push_back(v) ;
        n[v].push_back(u) ;
    }

    void printGraph()
    {
        for(int i = 0 ; i < V ; i++)
        {
            cout << "Đỉnh " << i << " gồm : " ;
            for(int x : n[i]) cout << x << " " ;
            cout << endl ;
        }
    }
};

int main()
{
    system("chcp 65001 > nul") ;

    int n, m ; 
    cout << "Nhập vào số đỉnh và cạnh của đồ thị : " ;
    cin >> n >> m ;
    
    graph numberTop(n) ;

    int u, v ;
    cout << "Nhập vào " << m << " cạnh của đồ thị : " << endl ;
    for(int i = 1 ; i <= m ; i++)
    {
        cout << "Nhập vào cạnh thứ " << i << " : " ;
        cin >> u >> v ; 
        numberTop.addEdge(u, v) ;
    }

    numberTop.printGraph() ;
        
}