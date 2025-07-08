#include<iostream>
using namespace std ;

int main()
{
    int Day ;
    cin >> Day ;
    int Weeks = Day / 7 ;
    int NgayDuRa = Day % 7 ;
    int MinNgayNghi = Weeks * 2 ;
    int MaxNgayNghi = Weeks * 2 + min(2 , NgayDuRa) ;
    cout << MinNgayNghi << " " << MaxNgayNghi ;
}
