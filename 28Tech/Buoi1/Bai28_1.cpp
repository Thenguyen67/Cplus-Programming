#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std ;

int main()
{
    int a , b , c ;
    cin >> a >> b >> c ;
    if (b == 0)
    {
        if ( a < 0 || c < 0)
        {
            cout << fixed << setprecision(2) << -a/c ;
        }
        else
        {
            cout << "NO" ;
        }
    }
    else if (c == 0)
    {
        cout << -b/a ;
    }
    else if (a == 0 && b == 0 && c == 0)
    {
        cout << "INF" ;
    }
    else
    {
        int Delta = pow(b , 2) - 4*a*c ;
        if (Delta > 0)
        {
            cout << fixed << setprecision(2) << (-b + sqrt(Delta))/(2*a) << " " << (-b - sqrt(Delta))/(2*a) ;
        }
        else if (Delta == 0)
        {
            cout << fixed << setprecision(2) << -b/(2*a) ;
        }
        else
        {
            cout << "NO" ;
        }
    }
}
