#include<iostream>
using namespace std ;

int main()
{
    int n , Sum = 0 ;
    cin >> n ;
    while(true)
    {
        if (n > 0)
        {
            Sum = Sum + (n%10) ;
            n = n / 10 ;
        }
        else
        {
            break ;
        }
    }
    cout << Sum ;
}