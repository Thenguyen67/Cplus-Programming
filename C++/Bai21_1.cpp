#include<iostream>
using namespace std ;

int main()
{
    char KiTu ;
    cin >> KiTu ;
    if (KiTu >= '0' && KiTu <= '9')
    {
        cout << "YES" ;
    }
    else 
    {
        cout << "NO" ;
    }
}