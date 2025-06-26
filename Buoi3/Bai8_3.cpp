#include<iostream>
using namespace std ;

int main()
{
    unsigned int n ;
    cin >> n ;
    int Sum = 0 , A = 1 ;
    while(true)
    {
        if (A <= n)
        {
            Sum = Sum + (2*A - 1) ;
            A = A + 1 ;
        }
        else
        {
            break ;
        }
    }
    cout << Sum ;
}
