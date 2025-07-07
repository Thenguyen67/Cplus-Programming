#include<iostream>
using namespace std ;

void TongChuSo(int n)
{
    int Tong = 0 ;
    while(n > 0)
    {
        int c = n % 10 ;
        Tong = Tong + c ;
        n = n / 10 ;
    }
    cout << Tong ;
}

int main()
{
    int n ;
    cin >> n ;

    TongChuSo(n) ;
}