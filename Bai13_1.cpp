#include<iostream>
using namespace std ;

int main()
{
    unsigned int SoDau , SoCuoi ;
    cin >> SoDau >> SoCuoi ;
    if ((SoDau % SoCuoi)*SoCuoi > SoDau )
    {
        unsigned int SoDu = (SoDau % SoCuoi) - 1 ;
        cout << SoDu * SoCuoi ;
    }
    else
    {
        unsigned int SoDu = SoDau / SoCuoi ;
        cout << SoDu * SoCuoi ;
    }
}
