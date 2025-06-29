#include<iostream>
using namespace std ;

bool SoNguyenTo(int a)
{
    if (a < 2)
    {
        return false ;
    }
    else 
    {
        for (int i = 2 ; i*i <= a ; i++)
        {
            if (a % i == 0)
            {
                return false ;
            }
        }
        return true ;
    }
}
bool ChiaHetSNT(int b)
{
    while(b > 0)
    {
        int B = b % 10 ;
        if (B != 2 && B != 3 && B != 5 && B != 7)
        {
            return false ;
        }
        b = b / 10 ;
    }
    return true ;
}
int TongSNT(int c)
{
    int Tong = 0 ;
    while(c > 0)
    {
        Tong = Tong + c % 10 ;
        c = c / 10 ;
    }
    return Tong ;   
}
int main()
{
    int SoDau , SoCuoi ;
    int DemSo = 0 ;
    cin >> SoDau >> SoCuoi ;

    for (int i = SoDau ; i <= SoCuoi ; i++)
    {
        if (SoNguyenTo(i) && ChiaHetSNT(i) && SoNguyenTo(TongSNT(i)))
        {
            DemSo++ ;
        }
    }
    if (DemSo == 0)
    {
        cout << -1 ;
    }
    else
    cout << DemSo ;
}