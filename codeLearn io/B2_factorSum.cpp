#include<iostream>
#include<cmath>
using namespace std ;

int solve(int n)
{
    int sum = 0 ;
    for(int i = 2; i*i <= n; ++i)
    while(n%i == 0)
    {
        sum = sum + i ;
        n = n / i ;
    }

    if(n > 1) sum = sum + n ;
    return sum ;
}

int factorSum(int n)
{
    while(n != solve(n)) n = solve(n) ;
    return n ;
}

int main()
{
    int n ; cin >> n ;
    int result = factorSum(n) ;
    cout << result ;
}