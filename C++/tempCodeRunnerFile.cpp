#include<iostream>
using namespace std ;

int main()
{
   int n ;
   long long S ;
   cin >> n >> S ;
   int A = n ;
   int B = n ;
   int C = 1 ;
   for (int i = A ; i > 0 ; i--)
   {
    n = n + B ;
    if (n < S)
    {
        C = C + 1 ;
    }
    else if (n > S)
    {
        n = n - B ;
        B = B - 1 ;
    }
    else
    {
        break ;
    }
   }
   C = C + 1 ;
   cout << C ;
}