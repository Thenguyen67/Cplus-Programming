#include<iostream>
using namespace std ;

int main()
{
   int n ;
   long long S ;
   cin >> n >> S ;
   int B = n ;
   int C = 1 ;
   
   while(true)
   {
    n = n + B ;
    if (n < S)
    {
        C = C + 1 ;
    }
    else if (n > S)
    {
        n = n - B ;
        B-- ;
    }
    else
    {
        C = C + 1 ;
        break ;
    }
   }
   cout << C ;
}
