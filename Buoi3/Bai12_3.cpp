#include<iostream>
using namespace std ;

int main()
{
    long long n ;
    cin >> n ;
    int Count = 0 ;
    while(true)
    {
        if ( n > 0)
        {
            n = n / 10 ;
            Count = Count + 1 ;
        }
        else if ( n == 0)
        {
            Count = 1 ;
        }
        else
        {
            break ;
        }
    }
    cout << Count ;
}
