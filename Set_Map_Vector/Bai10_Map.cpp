#include<iostream>
#include<map>
using namespace std ;

int main()
{
    int n, m ; cin >> n >> m ;
    int a[n], b[m] ;

    map<int, int> mb, sm ;

    for(int &x : a) cin >> x ;

    for(int &x : b)
    {
        cin >> x ;
        mb[x]++ ;
    }

    for(int x : a)
    if(mb[x] && !sm.count(x))
    {
        cout << x << " " ;
        sm[x] = 1 ;
    }
}
