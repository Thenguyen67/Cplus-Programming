#include<iostream>
using namespace std ;

int GiaiThua(int a)
{
    int d = 1 ;
    for(int i = 1 ; i <= a ; i++)
    {
        d = d * i ;
    }
    return d ;
}

bool TongGiaiThua(int i)
{
    int SoGoc = i ;
    int b = 0 ;
    while(i > 0)
    {
        int a = i % 10 ;
        b = b + GiaiThua(a) ;
        i = i / 10 ;
    }
    return (b == SoGoc) ;
}

int main()
{
    int a , b ;
    cin >> a >> b ;

    for(int i = a ; i <= b ; i++)
    {
        if(TongGiaiThua(i))
        cout << i << " " ;
    }
}
