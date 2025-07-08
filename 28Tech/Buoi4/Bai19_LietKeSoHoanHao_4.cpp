#include<iostream>
using namespace std ;

bool SoHoanHao(int i)
{
    int Tong = 0 ;
    for(int j = 1 ; j <= i/2 ; j++)
    {
        if(i % j == 0) Tong = Tong + j ;
    }
    return (Tong == i) ;
}

int main()
{
    int a , b ;
    cin >> a >> b ;
    int c ;

    if(a > b)
    {
        c = a ;
        a = b ;
        b = c ;
    }

    for(int i = a ; i <= b ; i++)
    {
        if(SoHoanHao(i)) cout << i << " " ;
    }
}
