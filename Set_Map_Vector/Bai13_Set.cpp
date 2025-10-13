#include<iostream>
#include<set>
using namespace std ;

int main()
{
    set<int> s1, s2 ;
    int n, m ; cin >> n >> m ;
    int a[n], b[m] ;

    for(int &x : b)
    {
        cin >> x ;
        s2.insert(x) ;
    }

    for(int &x : a)
    {
        cin >> x ;
        if(s2.count(x)) continue ; 
        s1.insert(x) ; 
    }

    for(int x : s1) cout << x << " " ;
}