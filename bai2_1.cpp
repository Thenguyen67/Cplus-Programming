#include<iostream>
#include<math.h>
using namespace std ;

int main()
{
    cout << "Nhap vao so a : " ;
    int x ;
    cin >> x ;
    if ( x > pow(10 , 5) )
    cout << "So a khong hop le ! , vui long nhap lai" ;
    cout <<"A(x) = x^3 + 3x^2 + x + 1 = " << pow(x , 3) + 3 * pow ( x , 2 ) + x + 1 ;
}