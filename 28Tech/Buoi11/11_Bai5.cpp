#include<iostream>
using namespace std ;

int main()
{
    int SL ;
    cin >> SL ;
    int A[SL] ;

    int Dem = 0 ;
    float Tong = 0 ;
    for(int i = 0 ; i < SL ; i++)
    {
        cin >> A[i] ;
        Tong = Tong + A[i] ;
        Dem++ ;
    }

    cout << Tong / Dem ;
}
