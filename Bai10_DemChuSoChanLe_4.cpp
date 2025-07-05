#include<iostream>
using namespace std ;

int main()
{
    int SoChan = 0 , SoLe = 0 ;
    long long n ;
    cin >> n ;

    while(n > 0)
    {
        int a = n % 10 ;
        if(a % 2 == 0) SoChan++ ;
        else SoLe++ ;
        n = n / 10 ;
    }
    cout << SoChan << " " << SoLe ;
}