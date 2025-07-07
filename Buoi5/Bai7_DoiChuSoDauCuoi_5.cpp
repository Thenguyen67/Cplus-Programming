#include<iostream>
#include<cmath>
using namespace std ;

int DoiViTri(int n)
{
    if(n < 10) return n ;
    int SoChuSo = 0 ;
    int SoGoc = n ;
    while(n > 0)
    {
        n = n / 10 ;
        SoChuSo++ ;
    }

    int A = pow(10 , SoChuSo - 1) ;
    int SoDau = SoGoc / A ;
    int SoGiua = (SoGoc % A) / 10 ;
    int SoCuoi = SoGoc % 10 ;

    if(SoCuoi == 0) return SoGiua * 10 + SoDau ;
    
    return SoCuoi * A + SoGiua * 10 + SoDau ;

}

int main()
{
    int n ;
    cin >> n ;

    cout << DoiViTri(n) ;
}
