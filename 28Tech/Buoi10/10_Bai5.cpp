#include<iostream>
using namespace std ;

int KetQua(int SoHang)
{
    if(SoHang == 1) return 1 ;
    return SoHang * KetQua(SoHang - 1) ;
}

int main()
{
    int SoHang ;
    cin >> SoHang ;

    int GiaiThua = KetQua(SoHang) ;

    cout << GiaiThua ;
}
