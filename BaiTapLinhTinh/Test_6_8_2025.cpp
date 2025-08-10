#include<iostream>
using namespace std ;

int main()
{
    int Hang , Cot ;
    cin >> Hang >> Cot ;

    int A[Hang][Cot] ;

    for(int i = 0 ; i < Hang ; i++)
    for(int j = 0 ; j < Cot ; j++)
    cin >> A[i][j] ;

    for(int i = 0 ; i < Hang ; i++)
    {
        cout << endl ;
        for(int j = 0 ; j < Cot ; j++)
        cout << A[i][j] << " " ;
    }
} 
