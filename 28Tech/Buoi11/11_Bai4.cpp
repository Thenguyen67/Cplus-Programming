#include<iostream>
using namespace std ;

bool Check(int number)
{
    return number % 2 == 0 ;
}

int main()
{
    int SL ;
    cin >> SL ;
    int A[SL] ;

    for(int i = 0 ; i < SL ; i++)
        cin >> A[i] ;

    int DemChan = 0 ; 
    int DemLe = 0 ;
    for(int i = 0 ; i < SL ; i++)
        if(Check(A[i])) DemChan++ ;
        else DemLe++ ;

    cout << DemChan << endl << DemLe ;
}
