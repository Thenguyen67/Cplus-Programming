#include<iostream>
using namespace std ;

int main()
{
    int a , b ;
    long long n , SumMoney ;
    cin >> n >> a >> b ;

    if (a == b/2 )
    {
        SumMoney = n * a ;
        cout << SumMoney ;
    }
    else if (a < b/2)
    {
        SumMoney = n * a ;
        cout << SumMoney ;
    }
    else if (a > b/2)
    {
        SumMoney = n/2 * b ;
        cout << SumMoney ;
    }
    else 
    {
        if (n % 2 == 0)
        {
            SumMoney = n/2 * b ;
            cout << SumMoney ;
        }
        else
        {
            SumMoney = (n % 2) * a + n/2 * b ;
            cout << SumMoney ;
        }
    }

}