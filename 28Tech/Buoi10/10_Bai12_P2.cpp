#include<iostream>
using namespace std ;

int main()
{
    int SLPT ;
    cin >> SLPT ;

    int A[SLPT] ;
    for(int i = 0 ; i < SLPT ; i++)
    cin >> A[i] ;

    int Dem = 0 ;
    for(int i = 0 ; i < SLPT ; i++)
    {
        bool DaXuatHien = false ;
        for(int j = 0 ; j < i ; j++)
        if(A[i] == A[j]) 
        {
            DaXuatHien = true ;
            break ;
        }
        if(!DaXuatHien) Dem++ ;
    }
    
    cout << Dem ;
}
