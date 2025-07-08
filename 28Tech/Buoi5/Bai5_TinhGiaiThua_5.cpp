#include<iostream>
using namespace std ;

void GiaiThua(int n)
{
    int b = 1 ;
    for(int i = 1 ; i <= n ; i++)
    b = b * i ;

    cout << b ;
}

int main()
{
    int n ;
    cin >> n ;

    GiaiThua(n) ;
}
