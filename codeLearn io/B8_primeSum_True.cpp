#include <iostream>
#include <vector>
using namespace std;

int primeSum(int n)
{
    if (n < 2) return 0 ;

    const int MOD = 22082018 ;
    vector<bool> isPrime(n + 1, true) ;
    isPrime[0] = isPrime[1] = false ;

    for (int p = 2; p*p <= n; ++p)
    {
        if (isPrime[p])
        {
            for (int i = p * p; i <= n; i = i + p)
            isPrime[i] = false ;
        }
    } 

    long long totalSum = 0 ;
    for (int p = 2; p <= n; ++p)
    {
        if (isPrime[p])
        {
            totalSum = (totalSum + p) % MOD;
        }
    }
    return (int)totalSum ;
}

int main()
{
    int n ;
    cin >> n ;
    cout << primeSum(n) ;
}