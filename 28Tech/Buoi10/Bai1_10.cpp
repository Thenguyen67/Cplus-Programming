#include<iostream>
using namespace std ;

int TongDay(int SoHang)
{
    if(SoHang == 1) return 1 ;
    else return SoHang + (TongDay(SoHang - 1)) ;
}
int main()
{
    int SoHang ;
    cin >> SoHang ;

    int Tong = TongDay(SoHang) ;
    
    cout << Tong ;
}
