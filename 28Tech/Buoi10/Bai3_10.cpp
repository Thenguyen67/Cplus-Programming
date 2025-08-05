#include<iostream>
using namespace std ;

int DayF(int SoHang)
{
    if(SoHang == 1 || SoHang == 2) return 1 ;
    else return DayF(SoHang - 1) + DayF(SoHang - 2) ;
}

int main()
{
    int SoHang ;
    cin >> SoHang ;

    int Fibonaci = DayF(SoHang) ;

    cout << Fibonaci ;
}
