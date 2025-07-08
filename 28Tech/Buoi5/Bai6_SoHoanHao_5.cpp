#include<iostream>
using namespace std ;

void SoHoanHao(int n)
{
    for(int i = 1 ; i <= n ; i++)
    {
        int Tong = 0 ;
        for(int j = 1 ; j < i ; j++)
        {
            if(i % j == 0) Tong = Tong + j ;
        }
        if(Tong == i) cout << i << " " ;
    }
}

int main()
{
    int n ;
    cin >> n ;

    SoHoanHao(n) ;
}
