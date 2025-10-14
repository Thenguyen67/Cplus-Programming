#include<iostream>
using namespace std ;

int numberZero(int q)
{
    int i = 0 ;
    while(q %10 == 0 && q != 0)
    {
        i++ ;
        q = q / 10 ;
    }
    return i ;
}

int giaiThua(int n)
{
    int Tich = 1 ;
    for(int i = 1; i <= n; i++) Tich = Tich * i ;
    return Tich ;
}

int main()
{
    int n ; cin >> n ;
    cout << numberZero(giaiThua(n)) ;
}