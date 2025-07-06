#include<iostream>
using namespace std ;

int TinhTich(int n)
{
    int b = 1 ;
    while(n > 0)
    {
        int c = n % 10 ;
        b = b * c ;
        n = n / 10 ;
    }
    return b ;
}

int main()
{
    int n ;
    cin >> n ;

    cout << TinhTich(n) ;
}
