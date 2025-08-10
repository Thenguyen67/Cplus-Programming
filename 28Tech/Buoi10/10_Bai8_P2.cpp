#include<iostream>
using namespace std ;

int main()
{
    int Tong = 0 ;
    int SoLuong ;
    cin >> SoLuong ;

    int A[SoLuong] ;

    for(int i = 0 ; i < SoLuong ; i++)
    cin >> A[i] ;

    for(int i = 0 ; i < SoLuong ; i++)
    if(A[i] % 2 == 0) Tong = Tong + A[i] ;

    cout << Tong ;
}
