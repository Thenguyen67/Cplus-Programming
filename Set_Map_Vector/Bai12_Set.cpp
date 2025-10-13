#include<iostream>
#include<set>
using namespace std ;

int main()
{
    set<int> s1, s2, s3 ;

    int n, m ; cin >> n >> m ;
    int a[n], b[m] ;

    for(int &x : a) 
    {
        cin >> x ;
        s1.insert(x) ;
    }

    for(int &x : b) 
    {
        cin >> x ;
        s2.insert(x) ;
        if(s1.count(x)) continue ;
        s3.insert(x) ;

    }

    for(int x : s1)
    {
        if(s2.count(x)) continue ;
        s3.insert(x) ;
    }

    for(int x : s3) cout << x << " " ;
}