#include<iostream>
using namespace std ;
typedef long long ll ;
int main()
{
    ll n ;
    int Count = 0 ;
    cin >> n ;
    while(true)
    {
        if (n >= 100)
        {
            n = n % 100 ;
            Count++ ;
        }
        else if (n >= 20)
        {
            n = n % 20 ;
            Count++ ;
        }
        else if (n >= 10)
        {
            n = n % 10 ;
            Count++ ;
        }
        else if (n >= 5)
        {
            n = n % 5 ;
            Count++ ;
        }
        else
        {
            Count = Count + n ;
            break ;
        }
    }
    cout << Count ;
}