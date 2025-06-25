#include<iostream>
using namespace std ;

int main()
{
    char KiTu ;
    cin >> KiTu ;
    if (KiTu >= 'a' && KiTu <= 'z')
    {
        cout << char(KiTu - 32) ;
    }
    else
    {
        cout << KiTu ;
    }
}