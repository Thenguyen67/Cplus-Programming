#include<iostream>
using namespace std ;

bool SoNgTo(int i)
{
    for(int j = 2 ; j*j <= i ; j++)
    if(i % j == 0) return false ;
    return true ;
}

bool ChiaHet(int n)
{
    if(n < 2) return false ;
    for(int i = 2 ; i <= n ; i++)
    if(SoNgTo(i) && n % i == 0)
    return true ;
    return false ;
}

int main()
{
    int n ;
    cin >> n ;

    if(ChiaHet(n)) cout << 1 ;
    else cout << 0 ;
}
