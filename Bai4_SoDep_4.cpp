#include<iostream>
using namespace std ;

void KiemTraSoDep(int i)
{
    int BienTam = i ;
    if(i == 2 || i == 3 || i == 5 || i == 8)
    {
        cout << i << " " ;
        return ;  
    }
    bool Ktra = false ;
    int Sum = 0 ;
    while(i > 0)
    {
        int Before = i % 10 ;
        Sum = Sum + Before ;
        i = i / 10 ;
    }
    if(Sum == 2 || Sum == 3 || Sum == 5 || Sum == 8) Ktra = true ;
    if(Ktra) cout << BienTam << " " ;
}

void KiemTraSoNguyenTo(int SoDau , int SoCuoi)
{
    bool Check ;
    for(int i = SoDau ; i <= SoCuoi ; i++)
    {
        Check = true ;
        if(i < 2) continue ;
        for(int j = 2 ; j*j <= i ; j++)
        {
            if(i % j == 0) 
            {
                Check = false ;
                break ;
            }
        }
        if(Check) KiemTraSoDep(i) ;
    }
}
int main()
{
    int SoDau , SoCuoi ;
    cin >> SoDau >> SoCuoi ;

    KiemTraSoNguyenTo(SoDau , SoCuoi) ;
}