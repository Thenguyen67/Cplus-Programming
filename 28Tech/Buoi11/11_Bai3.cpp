#include<iostream>
using namespace std ;

bool ThuanNghich(int SL)
{
    int SoGoc = SL ;
    int SoDao = 0 ;
    while(SL > 0)
    {
        int ChuSo = SL % 10 ;
        SoDao = SoDao * 10 + ChuSo ;
        SL = SL / 10 ;
    }
    return SoGoc == SoDao ;
}

int main()
{
    int SL ;
    cin >> SL ;
    int A[SL] ;

    for(int i = 0 ; i < SL ; i++)
        cin >> A[i] ;

    int Dem = 0 ;
    for(int i = 0 ; i < SL ; i++)
        if(ThuanNghich(A[i])) Dem++ ;

    cout << Dem << endl ;

    for(int i = 0 ; i < SL ; i++)
        if(ThuanNghich(A[i])) cout << A[i] << " " ;
}

