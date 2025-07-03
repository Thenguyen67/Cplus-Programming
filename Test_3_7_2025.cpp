#include<iostream>
#include<cmath>
using namespace std ;
typedef long long ll ;

ll TinhTong(int BienChay)
{
    ll Tong = 0 ;
    while(BienChay > 0)
    {
        int a = BienChay % 10 ;
        Tong = Tong + a*a ;
        BienChay = BienChay / 10 ;
    }
    return Tong ;
}

bool KtraSNT(ll a)
{
    if(a < 2) return false ;
    for(int i = 2 ; i*i <= a ; i++)
    {
        if(a % i == 0) return false ;
    }
    return true ;
}
int main()
{
    ll n ;
    cin >> n ;

    ll BienChay = 2 ;
    ll BienDem = 0 ;
    while(true)
    {
        int a = TinhTong(BienChay) ;
        if(KtraSNT(a))
        {
            BienDem++ ;
            if(BienDem == n)
            {
                cout << BienChay ;
                break ;
            }
        }
        BienChay++ ;
    }
}