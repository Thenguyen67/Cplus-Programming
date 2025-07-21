#include<iostream>
using namespace std ;

int main()
{
    int SoLuongPT , Target ;
    cout << "So Luong Phan Tu Mang : " ;
    cin >> SoLuongPT ;
    cout << "Nhap Target : " ;
    cin >> Target ;

    for(int i = 0 ; i < SoLuongPT - 1 ; i++)
    for(int j = i + 1 ; j < SoLuongPT ;j++)
    if(i + j == Target) cout << i << " " << j << endl ;
}