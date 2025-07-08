#include<iostream>
using namespace std ;

int main()
{
    int CSN , Money , SoLuong ;
    cin >> CSN >> Money >> SoLuong ;

    int SumMoney = CSN*SoLuong*(SoLuong + 1)/2 ;
    if (Money >= SumMoney)
    {
        cout << 0 ;
    }
    else
    {
        cout << SumMoney - Money ;
    }
}
