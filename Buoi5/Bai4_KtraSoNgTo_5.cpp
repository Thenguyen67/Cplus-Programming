#include<iostream>
using namespace std ;

bool SoNgTo(int n) 
{
    if(n < 2) return false ;
    for(int i = 2 ; i*i <= n ; i++)
    {
        if(n % i == 0) return false ;
    }
    return true ;
}

int main()
{
    int n ;
    cin >> n ;

    if(SoNgTo(n)) cout << 1 ;
    else cout << 0 ;
}
