#include<iostream>
using namespace std ;

int SoChuSo(int n) 
{
    int SoLuong = 1 ;
    for(int i = 1 ; i < n ; i++)
    {
        SoLuong = SoLuong * 10 ;
    }
    return SoLuong ;
}

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

bool SoChiaHet(int i)
{
    int Tong = 0 ;
    while(i > 0)
    {
        int b = i % 10 ;
        Tong = Tong + b ;
        i = i / 10 ;
    }
    return (Tong % 10 == 0) ;
}

int main()
{
    int n ;
    cin >> n ;
    int DemSoLuong = 0 ;
    if(n <= 1)
    {
        cout << "ERROR" ;
        return 0 ;
    }
    int SCS = SoChuSo(n) ;
    for(int i = SCS ; i <= SCS*10 - 1 ; i++)
    {
        if(SoThuanNghich(i))
        {
            if(SoChiaHet(i))
            {
                DemSoLuong++ ;
            }
        }
    }
    cout << DemSoLuong ;
}
