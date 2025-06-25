#include<iostream>
using namespace std ;

int main()
{
    long long a , b , c ;
    cin >> a >> b >> c ;
    if (a/b == c || b/c == a || c/a == b)
    {
        cout << "/" ;
    }
    else
    {
        cout << "NOSOL" ;
    }
}