#include<iostream>
#include<cmath>
using namespace std ;

bool ChinhPhuong(int number) 
{
    int n = sqrt(number) ;
    return number == n * n ;
}

int main()
{
    int SL ;
    cin >> SL ;
    int A[SL] ;


    int Dem = 0 ;
    for(int i = 0 ; i < SL ; i++)
    {
        cin >> A[i] ;
        if(ChinhPhuong(A[i])) Dem++ ;
    }

    cout << Dem << endl ;
    
    for(int i = 0 ; i < SL ; i++)
    if(ChinhPhuong(A[i])) cout << A[i] << " " ;
    
}