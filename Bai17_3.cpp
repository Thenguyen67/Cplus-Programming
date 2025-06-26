#include<iostream>
using namespace std ;

int main()
{
    int n ;
    int BienTam = 0 , a = 0 , b = 0 ;
    cin >> n ;
    while(n > 0)
    {
        BienTam = n % 10 ;
        if ( BienTam % 2 == 0)
        {
            a++ ;
        }
        else
        {
            b++ ;
        }
        n = n / 10 ;
    }
    if ( a == b)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
}