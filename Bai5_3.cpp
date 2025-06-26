#include<iostream>
#include<iomanip>
using namespace std ;

int main()
{
    unsigned int n ;
    cin >> n ;
    double Sum = 0 ;
    int A = 1 ;
    while(true)
    {
        if(A <= n)
        {
            Sum = Sum + 1/(2.0*A) ;
            A = A + 1 ;
        }
        else
        {
            break ;
        }
    }
    cout << fixed << setprecision(2) << Sum ;
}