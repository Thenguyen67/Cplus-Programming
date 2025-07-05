#include<iostream>
using namespace std ;

bool SoThuanNghich(int i)
{
    int SoGoc = i ;
    int b = 0 ;
    while(i > 0)
    {
        int c = i % 10 ;
        b = b*10 + c ;
        i = i / 10 ;
    }
    return (b == SoGoc) ;
}

bool ChuaSoSau(int i)
{
    while(i > 0)
    {
        int c = i % 10 ;
        if(c == 6) return true ;
        i = i / 10 ;
    }
    return false ; 
}

bool TongBangTam(int i)
{
    int b = 0 ;
    while(i > 0)
    {
        int c = i % 10 ;
        b = b + c ;
        i = i / 10 ;
    }
    return (b == 8) ;
}

int main()
{
    int SoDau , SoCuoi ;
    cin >> SoDau >> SoCuoi ;

    for(int i = SoDau ; i <= SoCuoi ; i++)
    {
        if(SoThuanNghich(i))
        if(ChuaSoSau(i))
        if(TongBangTam(i))
        cout << i << " " ;
    }
}
