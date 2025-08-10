#include<iostream>
using namespace std ;

int main()
{
    int A[100] ;
    int SoLuongPT ;
    cin >> SoLuongPT ;

    for(int i = 0 ; i < SoLuongPT ; i++)
    {
        cin >> A[i] ;
    }

    int Dem = 0 ;
    for(int i = 0 ; i < SoLuongPT ; i++)
    {
        if(A[i] % 2 == 0) Dem++ ;
    }

    cout << Dem ;
}
