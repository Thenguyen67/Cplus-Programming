#include<iostream>
using namespace std ;

int main()
{
    unsigned int x , y ;
    cin >> x >> y ;
    int KetQua = 1 ;
    for (int i = 0 ; i < y ; i++)
    {
        KetQua =  KetQua * x ;
    }
    cout << KetQua ;
}