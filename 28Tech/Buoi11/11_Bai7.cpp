#include<iostream>
using namespace std ;

int main()
{
    int SL ;
    cin >> SL ;
    int A[SL] ;

    for(int i = 0 ; i < SL ; i++)
    cin >> A[i] ;

    int ChonSo ;
    int Dem = 0 ;
    cin >> ChonSo ;

    for(int i = 0 ; i < SL ; i++)
    if(A[i] == ChonSo) Dem++ ;

    for(int i = 0 ; i < SL ; i++)
    cout << A[i] << " " ;

    cout << endl ; 
    cout << Dem ;
}
