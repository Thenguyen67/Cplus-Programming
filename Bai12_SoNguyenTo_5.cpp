#include<iostream>
using namespace std ;

bool SoNguyenTo(int i)
{
    if(i < 2) return false ;
    for(int j = 2 ; j*j <= i ; j++)
    if(i % j == 0) return false ;

    return true ;
}

bool ChiaHet(int i)
{
    if(i < 10) return (i == 5) ;

    int Tong = 0 ;
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

    for(int i = 1 ; i < n ; i++)
    if(SoNguyenTo(i) && ChiaHet(i))
    cout << i << " " ;
}