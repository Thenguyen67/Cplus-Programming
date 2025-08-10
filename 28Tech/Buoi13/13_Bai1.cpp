#include<iostream>
using namespace std ;

bool SoNgTo(int number)
{
    if(number < 2) return false ;
    for(int i = 2 ; i*i <= number ; i++)
    if(number % i == 0) return false ;

    return true ;
}

int main()
{
    int Hang , Cot ;
    cin >> Hang >> Cot ;

    int A[Hang][Cot] ;

    for(int i = 0 ; i < Hang ; i++)
    for(int j = 0 ; j < Cot ; j++)
    cin >> A[i][j] ;

    int Tong = 0 ;
    for(int i = 0 ; i < Hang ; i++)
    for(int j = 0 ; j <= i ; j++)
    if(SoNgTo(A[i][j])) Tong = Tong + A[i][j] ;

    cout << Tong ;
} 
