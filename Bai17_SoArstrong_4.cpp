#include<iostream>
#include<cmath>
using namespace std ;

int GiaiThua(int SoGoc , int c)
{
    int d = SoGoc ;
    int a = SoGoc ;
    int SoChuSo = 0 ;
    while(SoGoc > 0)
    {
        SoGoc = SoGoc / 10 ;
        SoChuSo++ ;
    }
    int b = 0 ;
    while(a > 0)
    {
        int c = a % 10 ;
        b = b + pow(c , SoChuSo) ;
        a = a / 10 ;
    }
    return (b == SoGoc) ;
}

bool  SoArmstrong(int i)
{
    int SoChuSo = 0 ;
    int SoGoc = i ;
    int b = 0 ;
    while(i > 0)
    {
        int c = i % 10 ;
        b = b + GiaiThua(SoGoc , c) ;
        i = i / 10 ;
        
    }
    return (b == SoGoc) ;
}

int main()
{
    int n ;
    cin >> n ;

    for(int i = 1 ; i <= n ; i++)
    {
        if(SoArmstrong(i)) cout << i << " " ;
    }
}