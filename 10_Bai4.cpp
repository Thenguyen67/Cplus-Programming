#include<iostream>
using namespace std ;

int Count(int DemSL) 
{
    if(DemSL < 10) return 1 ;
    return 1 + Count(DemSL / 10) ;
}

int main()
{
    int DemSL ;
    cin >> DemSL ;

    int SoLuong = Count(DemSL) ;

    cout << SoLuong ;
}