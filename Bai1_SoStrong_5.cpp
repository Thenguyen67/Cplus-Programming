#include<iostream>
using namespace std ;

int GiaiThua(int c)
{
    int b = 1 ;
    for(int i = 1 ; i <= c ; i++)
    b = b * i ;

    return b ;
}

bool SoStrong(int n)
{
    int SoGoc = n ;
    int Tong = 0 ;
    while(n > 0)
    {
        int c = n % 10 ;
        Tong = Tong + GiaiThua(c) ;
        n = n / 10 ;
    }
    return (Tong == SoGoc) ;
}

int main()
{
    int n ;
    cin >> n ;
    
    if(SoStrong(n)) cout << 1 ;
    else cout << 0 ;
}