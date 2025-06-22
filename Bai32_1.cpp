#include<iostream>
using namespace std ;

int main()
{
    long long a , b , c , d , e ;
    cin >> a >> b >> c >> d >> e ;
    long long Day[5] = {a , b , c , d , e} ;
    int NhoNhat = Day[0] ;
    for ( int i = 0 ; i < 5 ; i++)
    {
        if (NhoNhat > Day[i])
        {
            NhoNhat == Day[i] ;
        }
    }
    long long DayMoi[4] ;
    int n = 0 ;
    for (int i = 0 ; i < 4 ; i++)
    {
        if (Day[i] != NhoNhat)
        {
            DayMoi[n] = Day[i] ;
            n++ ;
        }
    }
    int NhoNhi = DayMoi[0] ;
    for (int i = 0 ; i < 4 ; i++)
    {
        if (NhoNhi > DayMoi[i])
        {
            NhoNhi = DayMoi[i] ; 
        }
    }
    cout << NhoNhi ;
}