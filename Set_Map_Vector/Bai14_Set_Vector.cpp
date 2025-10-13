#include<iostream>
#include<set>
#include<vector>
using namespace std ;

int main()
{
    int n ; cin >> n ;
    int a[n] ;
    vector<int> v1(n) ;
    for(int &x : a) cin >> x ;

    vector<int> f(n) ;
    multiset<int> ms ;
    for(int i = n-1 ; i >= 0 ; i--)
    {
        ms.insert(a[i]) ;
        f[i] = ms.size() ;
    }

    int queory ; cin >> queory ;
    while(queory--)
    {
        int l ; cin >> l ;
        cout << f[l] << endl ;
    }
}