#include<iostream>
using namespace std ;

int main()
{
    int SLPT ;
    cin >> SLPT ;

    int A[SLPT] ;
    for(int i = 0 ; i < SLPT ; i++)
    cin >> A[i] ;

    for(int i = SLPT - 1 ; i >= 0 ; i--)
    cout << A[i] << " " ;
}
