#include<iostream>
using namespace std ;

int main()
{
    float Bai1 , Bai2 , Bai3 , Bai4;
    cin >> Bai1 >> Bai2 >> Bai3 >> Bai4 ;
    float DiemTK = (Bai1 + Bai2 + 2*Bai3 + 3*Bai4)/7 ;
    if (DiemTK >= 8)
    {
        cout << "GIOI" ;
    }
    else if (DiemTK < 8 && DiemTK >= 6.5)
    {
        cout << "KHA" ;
    }
    else if (DiemTK < 6.5 && DiemTK >= 5.0)
    {
        cout << "TRUNG BINH" ;
    }
    else
    {
        cout << "YEU" ;
    }
}