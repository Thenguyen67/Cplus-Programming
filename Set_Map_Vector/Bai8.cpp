#include<iostream>
#include<set>
#include<locale>
using namespace std ;

int main()
{
    system("chcp 65001 > nul") ;
    
    multiset<int> ms ;

    int n ; cin >> n ;
    for(int i = 0 ; i < n ; i++)
    {
        int a ; cin >> a ;
        ms.insert(a) ;
    }

    int b ; cin >> b ;
    ms.insert(b) ;

    int c ; cin >> c ;
    ms.erase(c) ;

    multiset<int>::iterator ab = ms.begin() ;
    multiset<int>::iterator bc = prev(ms.end()) ;
    cout << *ab << " " << *bc ;
}