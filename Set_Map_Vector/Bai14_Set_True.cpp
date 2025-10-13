#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std ;

int main()
{
    int n ; cin >> n ;

    vector<int> a(n) ;
    for (int i = 0 ; i < n ; ++i) cin >> a[i] ;

    vector<int> f(n) ;
    unordered_set<int> uset ;

    for (int i = n - 1 ; i >= 0 ; --i)
    {
        uset.insert(a[i]) ;
        f[i] = uset.size() ;
    }

    int q ; cin >> q ;

    while (q--)
    {
        int l ; cin >> l ;
        cout << f[l] << "\n" ;
    }
}