#include<iostream>
#include<cmath>
using namespace std ;

int main()
{
    float SoDau , SoCuoi ;
    cin >> SoDau >> SoCuoi ;
    if ( SoCuoi < SoDau)
    {
        cout << "Doan nhap vao khong hop le !" ;
        return 0 ;
    }
    /*Hoac cach sau
    if (SoDau > SoCuoi)
    {
        swap(a , b) ;
    }
    */ 
   int Tang = ceil(SoDau) ; // So nguyen nho nhat lon hon hoac bang SoDau
   int Giam = floor(SoCuoi) ;  // So nguyen lon nhat be hon hoac bang SoCuoi
   int DemSo = (Giam >= Tang ) ? Giam - Tang + 1 : 0 ;
   cout << DemSo ;
}