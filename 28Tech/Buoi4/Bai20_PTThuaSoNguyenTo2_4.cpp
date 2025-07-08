#include<iostream>
using namespace std ;

bool SoNgTo(int i)
{
    if(i < 2) return false ;
    for(int j = 2 ; j*j <= i ; j++)
    {
        if(i % j == 0) return false ;
    }
    return true ;
}

void ThuaSoNguyenTo(int n)
{
    int SoGoc = n ;
    for(int i = 2 ; i <= SoGoc ; i++)
    {
        if(SoNgTo(i))
        {
            if(n % i == 0)
            {
                cout << i << " " ;
                n = n / i ;
            }
        }
    }
}

int main()
{
    int n ;
    cin >> n ;

    ThuaSoNguyenTo(n) ;
}
