#include<iostream>
using namespace std ;

bool SoThuanNghich(int i)
{
    int SoGoc = i ;
    int ThuanNghich = 0 ;
    while(i > 0)
    {
        int c = i % 10 ;
        if(c == 9) return false ;
        ThuanNghich = ThuanNghich* 10 + c ;
        i = i / 10 ;
    }
    return (ThuanNghich == SoGoc) ;
}

int main()
{
    int n ;
    cin >> n ;

    for(int i = 1 ; i <= n ; i++)
    {
        if(SoThuanNghich(i))
        cout << i << " " ;
    }
}