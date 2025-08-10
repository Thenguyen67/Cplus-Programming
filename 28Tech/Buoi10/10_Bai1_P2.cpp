#include<iostream>
using namespace std ;

bool Check(int SoNguyen)
{
    while(SoNguyen > 0)
    {
        int c = SoNguyen % 10 ;
        if(c % 2 == 0) return false ;
        SoNguyen = SoNguyen / 10 ;
    }
    return true ;
}

int main()
{
    int SoNguyen ;
    cin >> SoNguyen ;

    if(Check(SoNguyen)) cout << 1 ;
    else cout << 0 ;
}
