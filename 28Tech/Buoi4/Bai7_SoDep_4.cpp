#include<iostream>
using namespace std ;

bool KtraThuanNghich(int i)
{
    int SoGoc = i ;
    int b = 0 ;
    while(i > 0)
    {
        int c = i % 10 ; 
        b = b * 10 + c ;
        i = i / 10 ;
    }
    return (b == SoGoc) ; 
}

bool KtraUSNT(int i)
{
    int UocSo = 0 ;
    if(i < 2) return false ;
    for(int j = 2 ; j*j <= i ; j++)
    {
        if(i % j == 0) return false ;
    }
    return true ;
}

int main()
{
    int SoDau , SoCuoi ;
    int SoLuong = 0 ;
    cin >> SoDau >> SoCuoi ;

    for(int i = SoDau ; i <= SoCuoi ; i++)
    {
        if(KtraThuanNghich(i))
        {
            if(KtraUSNT(i))
            {
                SoLuong++ ;
            }
        }
    }
    cout << SoLuong ;
}
