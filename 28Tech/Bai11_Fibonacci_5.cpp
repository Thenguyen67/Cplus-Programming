#include<iostream>
#include<cmath>
using namespace std ;

// Cach 1 :
// bool Fibonacci(int n)
// {
//     if(n == 0 || n == 1) return true ;
//     int SoDau = 0 ;
//     int SoTiepTheo = 1 ;
//     int SoMoi ;
//     while(SoTiepTheo < 100)
//     {
//         SoMoi = SoTiepTheo + SoDau ;
//         SoDau = SoTiepTheo ;
//         SoTiepTheo = SoMoi ;
//         if(n == SoMoi) return true ;
//     }
//     return false ;
//}

// Cach 2 :
bool SoChinhPhuong(int a)
{
    int b = sqrt(a) ;
    return (b*b == a) ;
}

bool Fibonacci(int n)
{
    return SoChinhPhuong(5*n*n + 4) || SoChinhPhuong(5*n*n - 4) ;
}

int main()
{
    int n ;
    cin >> n ;

    if(Fibonacci(n)) cout << 1 ;
    else cout << 0 ;

}