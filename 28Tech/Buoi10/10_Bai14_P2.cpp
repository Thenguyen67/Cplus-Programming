#include<iostream>
using namespace std ;

int main()
{
    int SL ;
    cin >> SL ;

    int A[SL] ;
    for(int i = 0 ; i < SL ; i++)
    cin >> A[i] ;

    int maxPT = A[0] ;
    for(int i = 1 ; i < SL ; i++)
    if(maxPT < A[i]) maxPT = A[i] ;

    cout << maxPT ;
}
