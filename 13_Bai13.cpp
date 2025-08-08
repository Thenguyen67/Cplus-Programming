#include<iostream>
#include<cstring>
using namespace std ;

int KiTuThuong(char s[])
{
    int Dem = 0 ;
    for(int i = 0 ; i <= strlen(s) ; i++)
    if(s[i] >= 'a' && s[i] <= 'z' ) Dem++ ;

    return Dem ;
}

int main()
{
    char s[100] ;
    cin.getline(s , 100) ;

    int SoLuong = KiTuThuong(s) ;

    cout << SoLuong ;
}