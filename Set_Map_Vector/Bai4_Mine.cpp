#include<iostream>
#include<set> 
#include<locale>
using namespace std ;

int main()
{
    system("chcp 65001 > nul") ;

    multiset<int> s ;
    int n ; cin >> n ;
    while(n--)
    {
        int t ; cin >> t ;
        s.insert(t) ;
    }

    cout << "Thêm phần tử : " ;
    int addEdge ; cin >> addEdge ;
    s.insert(addEdge) ;

    cout << "Mảng sau khi thêm : " ;
    for(multiset<int>::iterator it = s.begin() ; it != s.end() ; it++)
    cout << *it << " " ;
    cout << endl ;

    cout << "Xóa phần tử : " ;
    int eraEdge ; cin >> eraEdge ;
    multiset<int>::iterator it = s.find(eraEdge) ;
    if(it != s.end()) s.erase(it) ;

    for(multiset<int>::iterator it = s.begin() ; it != s.end() ; it++)
    cout << *it << " " ;
    cout << endl ;

    cout << "kiểm tra phần tử : " ;
    int checkEdge ; cin >> checkEdge ;
    if(s.count(checkEdge)) cout << "Có" << endl ;
    else cout << "Không" << endl ;
}
