#include<iostream>
using namespace std ;

int TongChuSo(int c)
{
    int Tong = 0 ;
    while(c > 0)
    {
        int b = c % 10 ;
        Tong = Tong + b ;
        c = c / 10 ;
    }
    return Tong ;
}

int main()
{
    int a , b ;
    cin >> a >> b ;

    if(TongChuSo(a) > TongChuSo(b))
    cout << b << " " << a ;
    else if(TongChuSo(a) == TongChuSo(b)) 
    cout << a << " " << b ;
    else cout << a << " " << b ;
}