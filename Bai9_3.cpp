#include<iostream>
#include<cmath>
using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    int Sum = 0 , A = 1 ;
    while(true)
    {
        if (A <= n)
        {
            Sum = Sum + pow(A , 3) ;
            A = A + 1 ;
        }
        else
        {
            break ;
        }
    }
    cout << Sum ;
}