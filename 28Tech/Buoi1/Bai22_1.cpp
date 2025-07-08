#include<iostream>
using namespace std ;

int main()
{
    char KiTu ;
    cin >> KiTu ;
    if (KiTu >= 'A' && KiTu <= 'Z')
    {
        cout << char(KiTu + 32);
    }
    else 
    {
        cout << KiTu ;
    }
}
