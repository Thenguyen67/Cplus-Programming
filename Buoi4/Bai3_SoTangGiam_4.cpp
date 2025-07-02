#include<iostream>
using namespace std ; 

void KiemTraSoNguyenTo(int i , int &SoLuong)
{
    bool c , Tang = false , Giam = false ;
    if(i > 2)
    {
        c = true ;
        for(int j = 2 ; j*j <= i ; j++)
        {
            if(i % j == 0) c = false ;
        }
        if(c)
        {
            if(i > 2){}
            int SoCuoi = i % 10 ;
            i = i / 10 ;
            while(i > 0)
            {
                int SoDangTruoc = i % 10 ;
                if(SoCuoi > SoDangTruoc) Tang = true ;
                if(SoCuoi < SoDangTruoc) Giam = true ;
                SoCuoi = SoDangTruoc ;
                i = i / 10 ;
            }
            if(Giam == true) SoLuong++ ;
            else if(Tang == true) SoLuong++ ;
        }
    }
}

void SoLuongPhanTu(int a , int b , int &SoLuong) 
{
    while(a > 0)
    {
        a = a - 1 ;
        b = b * 10 ;
    }
    for(int i = b ; i <= b*10 - 1 ; i++)
    {
        KiemTraSoNguyenTo(i , SoLuong) ;
    }
    cout << SoLuong ;
}

int main()
{
    int n ; 
    cin >> n ;
    int a = n - 1 , b = 1 ;
    int SoLuong = 0 ;
    SoLuongPhanTu(a , b) ;
}
