#include<iostream>
using namespace std ;

int main()
{
    int A[100] ;
    int SoLuong ;
    cin >> SoLuong ;
    
    for(int i = 0 ; i < SoLuong ; i++)
    cin >> A[i] ;

    int Dem = 0 ;
    for(int i = 0 ; i < SoLuong ; i++)
    if(A[i] % 2 != 0) Dem++ ;

    cout << Dem ;
}