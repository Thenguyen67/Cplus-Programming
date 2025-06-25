#include<iostream>
using namespace std ;

int main() 
{
    int Year ;
    cin >> Year ;
    if (Year <= 0)
    {
        cout << "INVALID" ;
    }
    else if (Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0)
    {
        cout << "YES" ;
    }
    else 
    {
        cout << "NO" ;
    }
}