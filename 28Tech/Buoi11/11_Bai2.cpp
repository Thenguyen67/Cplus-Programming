#include<iostream>
using namespace std ;

bool SoNgTo(int A)
{
    if(A < 2) return false ;
    for(int i = 2 ; i < A ; i++)
    if(A % i == 0) return false ;

    return true ;
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
    if(SoNgTo(A[i])) Dem++ ;

    cout << Dem ;
}
