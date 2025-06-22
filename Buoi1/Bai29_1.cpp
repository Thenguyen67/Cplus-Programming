#include<iostream>
using namespace std ;

int main()
{
    float SoDau , SoCuoi ;
    cin >> SoDau >> SoCuoi ;
    if ( SoCuoi < SoDau)
    {
        cout << "Doan nhap vao khong hop le !" ;
    }
    else 
    {
        int Tang = int(SoDau) ;
        if (SoDau > Tang)
        {
            Tang++ ;
        }
        int Giam = int(SoCuoi) ;
        int DemSo = (Giam >= Tang) ? Giam - Tang + 1 : 0 ;
        cout << DemSo ; 
    } 
}
