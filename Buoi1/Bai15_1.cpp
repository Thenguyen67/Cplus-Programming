#include<iostream>
using namespace std ;

int main()
{
    int SoBatKi ;
    cin >> SoBatKi ;
    if (SoBatKi % 3 == 0 && SoBatKi % 5 == 0)
    {
        cout << 1 ;
    }
    else
    {
        cout << 0 ;
    }
}
