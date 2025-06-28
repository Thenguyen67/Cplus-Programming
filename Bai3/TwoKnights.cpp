#include<iostream>
using namespace std ;

 int main()
 {
    int n ;
    cin >> n ;
    for (int k = 1 ; k <= n ; k++)
    {
        long long PossibleMove = 1ll * k*k * (k*k - 1) / 2 ; 
        long long  CantMove = (k > 2) ? 8 * (k - 1) * (k - 2) : 0 ;
        cout << PossibleMove - CantMove << endl ;
    }
 }
