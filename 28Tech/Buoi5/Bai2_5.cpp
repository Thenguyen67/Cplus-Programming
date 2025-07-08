#include<iostream>
using namespace std ;

void SoDau(int n)
{
    while(n >= 10)
    {
        n = n / 10 ;
    }
    cout << n << " " ;
}

void SoCuoi(int n)
{
    cout << n % 10 ;
}
int main()
{
    int n ;
    cin >> n ;

    SoDau(n) ;
    SoCuoi(n) ;
}
