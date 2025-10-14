#include<iostream>
using namespace std ;

int UCLN_Euclid(int a, int b)
{
    while(b != 0)
    {
        int r = a % b ;
        a = b ; 
        b = r ;
    }
    return a ;
}

int solve(int g)
{
    int sum = 0 ;
    for(int i = 2; i*i <= g; ++i)
    while(g%i == 0)
    {
        sum = sum + i ;
        g = g / i ;
    }
    if(g > 1) sum = sum + g ;
    return sum ;
}

int factorSum(int a, int b)
{
    int g = UCLN_Euclid(a, b) ;
    while(g != solve(g)) g = solve(g) ;
    return g ;
}

int main()
{
    int a, b ; cin >> a >> b ;
    int result = factorSum(a, b) ;
    cout << result ;
}