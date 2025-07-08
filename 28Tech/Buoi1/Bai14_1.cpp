#include<iostream>
using namespace std ;

int main()
{
    unsigned int SoDau , SoCuoi ;
    cin >> SoDau >> SoCuoi ;
    if (SoDau % SoCuoi == 0 )
    {
    unsigned int Thuong = SoDau / SoCuoi ;
    cout << Thuong * SoCuoi ;
    }
    else
    {
        if((SoDau / SoCuoi)*SoCuoi >= SoDau)
        {
            unsigned int Thuong = SoDau / SoCuoi ;
            cout << Thuong * SoCuoi ;
        }
        else 
        {
           unsigned int Thuong = SoDau / SoCuoi + 1 ;
           cout << Thuong * SoCuoi ; 
        }
    }
}
