#include<iostream>
using namespace std ; 

void TangHoacGiam(int i , int SoLuong)
{
    int d = i % 10 ;
    int e = i / 10 ;
    if (d < e || d > e) SoLuong++ ;
}
void KiemTraSoNguyenTo(int i)
{
    int SoLuong = 0 ;
    bool c ;
    if(i > 2)
    {
        c = true ;
        for(int j = 2 ; j*j <= i ; j++)
        {
            if(i % j == 0) c = false ;
        }
        if(c) TangHoacGiam(i , SoLuong) ;
    }
    cout << SoLuong ;
}

void SoLuongPhanTu(int a , int b) 
{
    while(a > 0)
    {
        a = a - 1 ;
        b = b * 10 ;
    }
    for(int i = b ; i <= b*10 - 1 ; i++)
    {
        KiemTraSoNguyenTo(i) ;
    }
}

int main()
{
    int n ; 
    cin >> n ;
    int a = n - 1 , b = 1 ;
    int SoLuong = 0 ;
    //  while(a > 0)
    // {
    //     a = a - 1 ;
    //     b = b * 10 ;
    // }
    // for(int i = b ; i <= b*10 - 1 ; i++)
    // {
    //     int SoLuong = 0 ;
    //     bool c ;
    //     if(i > 2)
    //     {
    //         c = true ;
    //         for(int j = 2 ; j*j <= i ; j++)
    //         {
    //             if(i % j == 0) c = false ;
    //         }
    //         if(c) //1
    //         {
    //             int d = n % 10 ;
    //             int e = n / 10 ;
    //             if (d < e || d > e) SoLuong++ ;
    //         }
    //     }
    // }
    SoLuongPhanTu(a , b) ;
}
