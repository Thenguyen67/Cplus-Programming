#include<iostream>
using namespace std ;

bool UocSo(int n)
{
    int Tong = 0 ;
    for(int i = 1 ; i < n ; i++)
    {
        if(n % i == 0) Tong = Tong + i ;
    }
    return (Tong == n) ;
}

int main()
{
    int n ;
    cin >> n ;

    if(UocSo(n)) cout << 1 ;
    else cout << 0 ;
}