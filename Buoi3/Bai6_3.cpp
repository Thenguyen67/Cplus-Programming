#include<iostream>
using namespace std ;

int main()
{
    unsigned int n ;
    cin >> n ;
    double Sum = 0 ;
    int A = 1 ;
    while(true)
    if (A <= n)
    {
        if (A % 2 != 0)
        {
            Sum = Sum - A*1.0 ;
            A = A + 1 ;
        }
        else
        {
            Sum = Sum + A*1.0 ;
            A = A + 1 ;
        }
    }
    else
    {
        break ;
    }
    cout << Sum ;
}
