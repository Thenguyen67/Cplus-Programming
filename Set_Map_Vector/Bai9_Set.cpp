#include<iostream>
#include<set>
using namespace std ;

int main(){
    set<int,greater<int>> rs ;

    int n , m ; cin >> n >> m ;
    int a[n] , b[m] ;

    for(int &x : a){
        cin >> x ;
        rs.insert(x) ;
    }

    for(int &x : b){
        cin >> x ;
        rs.insert(x) ;
    }

    for(int x : rs) cout << x << " " ;
    //for(auto it = rs.rbegin() ; it != rs.rend() ; it++) cout << *it << " " ;
}