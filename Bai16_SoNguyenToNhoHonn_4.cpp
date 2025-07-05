#include<iostream>
using namespace std ;

void SoNgToNhoHon(int n)
{
    for(int i = 2 ; i < n ; i++)
    {
        bool Ktra = true ;
        for(int j = 2 ; j*j <= i ; j++)
        {
            if(i % j == 0)
            {
                Ktra = false ;
                break ;
            }
        }
    if(Ktra) cout << i << " " ;
    }
}

int main()
{
    int n ;
    cin >> n ;
    if(n < 2) return 0 ;
    SoNgToNhoHon(n) ;
}