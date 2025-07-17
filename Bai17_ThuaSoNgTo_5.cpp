#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cin >> n ;

    bool Ktra = false ;
    for(int i = 2 ; i*i <= n ; i++)
    while(n % i == 0)
    {
        if(Ktra) cout << "x" ;
        cout << i ;
        n = n / i ;
        Ktra = true ;
    }

    if(n > 1) 
    if(Ktra)
    {
        cout << "x" ;
        cout << n ;
    }
}