#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    int A[n] ;

    for(int i = 0 ; i < n ; i++)
    cin >> A[i] ;

    int *ptr = A ;
    int Chan = 0 , Le = 0 ;
    for(int i = 0 ; i < n ; i++)
    if(*(ptr + i) % 2 == 0) Chan++ ;
    else Le++ ;

    cout << Chan << " " << Le ;
    
}