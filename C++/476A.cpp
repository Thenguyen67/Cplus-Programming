#include<iostream>
using namespace std ;

int main()
{
    unsigned int n , m ;
    int l ;
    cin >> n >> m ;
    if (n % 2 == 0)
    {
        l = n/2 ;
    }
    else 
    {
        l = n/2 + 1 ;
    }
    int BoiBeNhat = (l + m - 1) / m * m ;
    if ( BoiBeNhat <= n) 
    {
        cout << BoiBeNhat ;
    } 
    else
    {
        cout << "-1" ;
    }
}