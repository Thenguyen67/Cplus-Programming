#include<iostream>
using namespace std ;

int main()
{
    unsigned int n , t ;
    cin >> n >> t ;
    int B = 1 ;
    bool C ;
    int D ;
    while(true)
    {
        if (n > 1)
        {
            n = n - 1 ;
            B = B * 10 ;
        }
        else
        {
            break ;
        }
    }
    C = false ;
    for ( int i = B ; i <= B*10 - 1 ; i++)
    {
        if (i % t == 0)
        {
            D = i ;
            C = true ;
            break ;
        }
    }
    if (C == false)
    {
        cout << -1 ;
    }
    else
    {
        cout << D ;
    }
}