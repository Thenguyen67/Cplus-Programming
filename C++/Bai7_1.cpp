#include<iostream>
#include<iomanip>
using namespace std ;

int main()
{
    unsigned int C ;
    cin >> C ;
    float F = (C * 1.0 * 9 / 5) + 32 ;
    cout << fixed << setprecision(2) << F ;
}