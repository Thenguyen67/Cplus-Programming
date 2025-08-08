#include<iostream>
using namespace std ;

int UCLN(int TuSo , int MauSo)
{
    while(MauSo)
    {
        int t = TuSo % MauSo ;
        TuSo = MauSo ;
        MauSo = t ;
    }
    return TuSo ;
}

struct PhanSo
{
    int TuSo , MauSo ;
};

void Nhap(PhanSo &A)
{
    cin >> A.TuSo >> A.MauSo ;
}

int RutGon(PhanSo &A)
{
    int k = UCLN(A.TuSo , A.MauSo) ;
    A.TuSo = A.TuSo / k ;
    A.MauSo = A.MauSo / k ;
}
void Xuat(PhanSo A)
{
    cout << A.TuSo << "/" << A.MauSo ;
}

int main()
{
struct PhanSo A ;
Nhap(A) ;
RutGon(A) ;
Xuat(A) ;
}