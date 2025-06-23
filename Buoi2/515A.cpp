#include<iostream>
#include<cmath>
using namespace std ;

int main()
{
    long long a , b , s ;
    cin >> a >> b >> s ;
    int PerfectStep = abs(a) + abs(b) ;
    if (s > PerfectStep)
    {
        if (s % 2 == 0 && PerfectStep % 2 == 0)
        {
            cout << "YES" ;
        }
        else if (s % 2 == 1 && PerfectStep % 2 == 1)
        {
            cout << "YES" ;
        }
        else 
        {
            cout << "NO" ;
        }
    }
    else 
    {
        cout << "NO" ;
    }
}
