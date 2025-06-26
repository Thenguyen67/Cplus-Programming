#include<iostream>
#include<iomanip>
using namespace std ;

int main()
{
    unsigned int n ;
    cin >> n ;
    double Sum = 0 ;
    for ( int i = 1 ; i <= n ; i++)
    {
        Sum = Sum + 1.0/i ;
    }
    cout << fixed << setprecision(3) << Sum ;
}
