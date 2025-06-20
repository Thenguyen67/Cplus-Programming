#include<iostream>
using namespace std ;

int main()
{
    int SoBatKi ;
    cin >> SoBatKi ;
    bool Chiahet3 = SoBatKi % 3 == 0 ;
    bool Chiahet5 = SoBatKi % 5 == 0 ;
    if (Chiahet3 && Chiahet5 )
    {
        cout << 1 ;
    }
    else
    {
        cout << 0 ;
    }
}