#include<iostream>
using namespace std ;

int main()
{
    char KiTu ;
    cin >> KiTu ;
    if (KiTu >= 'A' && KiTu <= 'Z' || KiTu >= 'a' && KiTu <= 'z')
    {
        cout << "YES" ;
    }
    else 
    {
        cout << "NO" ;
    }
}
