#include<iostream>
using namespace std ;

int main()
{
    int SL ;
    cin >> SL ;
    int A[SL] ;

    for(int i = 0 ; i < SL ; i++)
    cin >> A[i] ;

    int Max = A[0] ;
    int k = 0 ;
    for(int i = 1 ; i < SL ; i++)
    if(Max < A[i])
    {
        Max = A[i] ;
        k = i ;
    }

    for(int i = k ; i < SL - 1 ; i++)
    A[i] = A[i+1] ;

    int Max2 = A[0] ;
    for(int i = 0 ; i < SL - 1 ; i++)
    if(Max2 < A[i]) Max2 = A[i] ;

    cout << Max << endl ;
    cout << Max2 ;
}