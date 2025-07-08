#include<iostream>
using namespace std ;

int main()
{
    unsigned long long SoCuoi ;
    cin >> SoCuoi ;
    if(SoCuoi % 2 == 0)
    {
        unsigned long long TongDay = SoCuoi/2 ;
        cout << TongDay ;
    }
    else
    {
        unsigned long long TongDay = -(SoCuoi + 1)/2 ;
        cout << TongDay ;
    }
}
