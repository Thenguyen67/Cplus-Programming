#include<iostream>
using namespace std ;

int main()
{
    int SL ;
    cin >> SL ;
    int A[SL] ;

    for(int i = 0 ; i < SL ; i++)
    cin >> A[i] ;

    bool SoDuong = false ;
    for(int i = 0 ; i < SL ; i++)
    if(A[i] >= 0)
    {
        cout << 0 ;
        return 0 ;
    }
    cout << 1 ;
}