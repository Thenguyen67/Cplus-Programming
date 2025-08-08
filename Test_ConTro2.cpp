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
    int MAX = *ptr ;
    for(int i = 0 ; i < n ; i++)
    if(MAX < *(ptr + i)) MAX = *(ptr + i) ;

    cout << MAX ;

}