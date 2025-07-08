#include<iostream>
using namespace std ;

bool SoLocPhat(int n)
{
    while(n > 0)
    {
        int a = n % 10 ;
        if(a != 0 && a != 6 && a != 8) return false ;
        n = n / 10 ;
    }
    return true ;
}

int main()
{
    long long n ;
    cin >> n ;

    if(SoLocPhat(n)) cout << 1 ;
    else cout << 0 ;
}
