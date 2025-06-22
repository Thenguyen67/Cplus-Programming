#include<iostream>
using namespace std ;

int main()
{
        int a , b , c ;
    cin >> a >> b >> c ;
    if (a <= 0 || b <= 0 || c <= 0)
    {
        cout << "INVALID" ;
    }
    else if (a + b > c && a + c > b && c + b > a)
    {
        if (a == b && b== c && a == c)
        {
            cout << 1 ;
        }
        else if (a == b && a != c || b == c && b != a || a == c && a != b)
        {
            cout << 2 ;
        }
        else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        {
            cout << 3 ;
        }
        else
        {
            cout << 4 ;
        }
    }
    else
    {
        cout << "INVALID" ;
    }
}