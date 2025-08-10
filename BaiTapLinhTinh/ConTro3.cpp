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
    float Tong = 0 ;

    for(int i = 0 ; i < n ; i++)
    {
        Tong = Tong + *(ptr + i) ;
    }

    cout << (float) Tong / n ;
}
