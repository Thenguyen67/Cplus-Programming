#include<iostream>
#include<vector>
using namespace std ;

int primeSum(int n)
{
    if(n < 2) return 0 ;
    const int MOD = 22082018 ;
    vector<bool> v1(n+1, true) ;
    v1[0] = v1[1] = false ;

    for(int p =2; p*p <=n; ++p)
    if(v1[p])
    for(int i =p*p; i <=n; i = i +p)
    {
        v1[p] = false ;
    }

    int sum = 0 ;
    for(int p =2; p < n; ++p)
    {
        if(v1[p])
        {
            sum = sum + p ;
        }
    }
    return sum ;
}

int main()
{
    int n ; cin >> n ;
    cout << primeSum(n) ;
}