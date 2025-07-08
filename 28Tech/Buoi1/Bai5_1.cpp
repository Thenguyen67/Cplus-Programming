#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std ;

int main()
{
    int BanKinh ;
    float ChuVi , DienTich ;
    float PI = 3.14 ;
    cin >> BanKinh ;
    ChuVi = 2 * PI * BanKinh ;
    DienTich = PI * pow(BanKinh , 2) ;
    cout << fixed << setprecision(2) << ChuVi << " " << DienTich ;
}
