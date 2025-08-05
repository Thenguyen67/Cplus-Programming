#include<iostream>
#include<cmath> 
using namespace std ;

int TongDay(int SoHang)
{
    if(SoHang == 1) return 1 ;
    else return pow(SoHang , 2) + TongDay(SoHang - 1) ;
}

int main()
{
    int SoHang ;
    cin >> SoHang ;

    int Tong = TongDay(SoHang) ;
    
    cout << Tong ;
}
