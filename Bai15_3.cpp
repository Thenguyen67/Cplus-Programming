#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    int Chan = 0 , Le = 0 , BienTam ;
    while(true)
    {
        if (n > 0)
        {
            BienTam = n % 10 ;
            if (BienTam % 2 == 0)
            {
                Chan = Chan + 1 ;
            }
            else
            {
                Le = Le + 1 ;
            }
            n = n / 10 ;
        }
        else
        {
            break ;
        }
    }
    cout << Chan << " " << Le ;
}