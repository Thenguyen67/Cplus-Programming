#include<iostream>
using namespace std ;

bool SoNgTo(int i)
{
    if(i < 2 || i % 2 == 0) return false ;
    for(int j = 2 ; j*j <= i ; j++)
    if(i % j == 0) return false ;
    return true ;
}

bool ChiaHet(int i)
{
    int Tong = 0 ;

    if(i < 10)
    return (i == 5) ;

    while(i > 0)
    {
        int c = i % 10 ;
        Tong = Tong + c ;
        i = i / 10 ;
    }
    return (Tong % 5 == 0) ;
}

int main()
{
    int n ;
    cin >> n ;

    for(int i = 0 ; i < n ; i++)
    {
        if(SoNgTo(i))
        if(ChiaHet(i))
        cout << i << " " ;
    }
}
