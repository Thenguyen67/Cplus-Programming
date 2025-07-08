#include<iostream>
#include<iomanip>
using namespace std ;

int main()
{
    unsigned long long SoCuoi ;
    cin >> SoCuoi ;
    float TongDay = 1 - 1 /(SoCuoi + 1.0) ;
    cout << fixed << setprecision(2) << TongDay ;
}
