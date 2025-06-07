#include<iostream>
using namespace std ;

int main()
{
    int a , b , c ;
    cin >> a >> b >> c ;
    int S = a * ( b + c ) + b * ( a + c ) ;
    cout << S ;
    return 0 ;
}