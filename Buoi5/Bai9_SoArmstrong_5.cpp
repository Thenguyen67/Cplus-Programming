#include<iostream>
#include<cmath>
using namespace std ;

bool ArmStrong(int n)
{
    int SoChuSo = 0 ;
    int SoGoc = n ;
    int SoBanDau = n ;
    while(n > 0)
    {
        n = n / 10 ;
        SoChuSo++ ;
    }

    int b = 0 ;
    while(SoGoc > 0)
    {
        int c = SoGoc % 10 ;
        b = b + pow(c , SoChuSo) ;
        SoGoc = SoGoc / 10 ;
    }
    return (b == SoBanDau) ;
}

int main()
{
    int n ;
    cin >> n ;

    if(ArmStrong(n)) cout << 1 ;
    else cout << 0 ;
}
