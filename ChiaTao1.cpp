#include<iostream>
using namespace std ;

long long toHop(int n, int k) 
{
    long long res = 1 ;
    for (int i = 1; i <= k; i++) 
    {
        res = res * (n - i) / i ;
    }
    return res ;
}

int main()
{
    int n, m ;
    cin >> n >> m ;
    if (m > n) 
    {
        cout << 0 ;
    } else 
    {
        cout << toHop(n , m - 1) ;
    }
}
// Hoac co the lay 6 - 1 , 3 - 1 . An may tinh 
// 5C2 thi se ra 10 