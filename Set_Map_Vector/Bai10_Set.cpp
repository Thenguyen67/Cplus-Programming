#include<iostream>
#include<set>
using namespace std ;

int main()
{
    set<int> sb, sc ;

    int n, m ; cin >> n >> m ;
    int a[n], b[m] ;

    for(int &x : a)
    {
        cin >> x ;
    }

    for(int &x : b)
    {
        cin >> x ;
        sb.insert(x) ;
    }

    for(int x : a)
    if(sb.count(x) && !sc.count(x)) 
    {
        cout << x << " " ;
        sc.insert(x) ;
    }
}