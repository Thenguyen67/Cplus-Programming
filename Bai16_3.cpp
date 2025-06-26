#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    int BienTam , x = 0 ;
    bool m ;
    while (n > 0)
    {
        BienTam = n % 10 ;
        if (BienTam < 2)
        {
            m = false ;
        }
        else
        {
            m = true ;
            for (int i = 2 ; i * i <= BienTam ; i++)
            {
                if (BienTam % i == 0)
                {
                    m = false ;
                    break ;
                }
            }
        }
        if (m == true)
        {
            x++ ;
        }
        n = n / 10 ;
    }
    cout << x ;
}