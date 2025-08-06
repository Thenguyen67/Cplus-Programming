#include<iostream>
using namespace std ;

int main()
{
    int SoLuongPT ;
    cin >> SoLuongPT ;

    int A[SoLuongPT] ;
    
    for(int i = 0 ; i < SoLuongPT ; i++)
    cin >> A[i] ;

    for(int i = 0 ; i < SoLuongPT ; i++)
    cout << A[i] << " " ;
}