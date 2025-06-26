#include<iostream>
using namespace std ;

int main()
{
    unsigned int n ;
    cin >> n ;
    int First = 0 , Sum = 0 ;
    while(true)
    {
        if (First <= n)
        {

            if (First % 3 == 0)
            {
                Sum = Sum + First ;
                First = First + 1 ;
            }
            else
            {
            First = First + 1 ;
            }
        }
        else
        {
            break ;
        }
    }
    cout << Sum ;
}