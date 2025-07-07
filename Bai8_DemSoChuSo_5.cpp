#include<iostream>
using namespace std ;

void SoChuSo(int n)
{
    int SoLuong = 0 ;
    if(n < 10) cout << 1 ;
    while(n > 0)
    {
        n = n / 10 ;
        SoLuong++ ;
    }
    cout << SoLuong ;
}

int main()
{
    int n ;
    cin >> n ;

    SoChuSo(n) ;

}