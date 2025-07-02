#include<iostream>
using namespace std ;

int main()
{
    int a ;
    bool Tang = false , Giam = false , Bang ;
    cin >> a ;
    int BangA = a ;

    if(a < 10)
    {
        cout << "ERROR" ;
        return 0 ;
    }

    int SoCuoi = BangA % 10 ;
    BangA = BangA / 10 ;

    while(BangA > 0)
    {
        int SoDangTruoc = BangA % 10 ;
        if(SoCuoi > SoDangTruoc) Tang = true ;
        if(SoCuoi < SoDangTruoc) Giam = true ;
        if(SoCuoi == SoDangTruoc) Bang = true ;
        SoCuoi = SoDangTruoc ;
        BangA = BangA / 10 ;
    }

    if(Giam == true && Tang == false && Bang == false ) cout << "Giam" ;
    else if(Tang == true && Giam == false && Bang == false) cout << "Tang" ;
    else cout << "ERROR" ;
}
