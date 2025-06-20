#include<iostream>
using namespace std ;

int main()
{
    unsigned long long SoCuoi ;
    cin >> SoCuoi ;
    unsigned long long TongDay = SoCuoi * (SoCuoi + 1) * (2*SoCuoi + 1) / 6 ;
    cout << TongDay ;
}
