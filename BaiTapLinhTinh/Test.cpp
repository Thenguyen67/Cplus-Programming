#include<iostream>
using namespace std ;

int main()
{
    long long  n ;
    cin >> n ;
    int Count = 0 , Sum = 0  , Sum1 = 0 ;
    for (int i = 1 ; i <= n ; i++)
    {
        Count = 0 ;
        Sum = 0 ;
        for (int j = 1 ; j <= i ;j++)
        {
            if (i % j == 0)
            {
                Count++ ;
            }
        }
        if (Count == 3)
        {
            Sum = Sum + i ;
            Sum1 = Sum1 + Sum ;
        }
    }
    cout << Sum1 ;
}
