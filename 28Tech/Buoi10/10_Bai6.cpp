#include<iostream>
using namespace std ;

void DaoNguoc(int SoHang) 
{
    if(SoHang == 0) return ;
    cout << SoHang % 10 ;
    return DaoNguoc(SoHang / 10) ;
}

int main()
{
    int SoHang ;
    cin >> SoHang ;

    DaoNguoc(SoHang) ;
}
