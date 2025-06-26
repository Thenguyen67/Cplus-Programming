#include<iostream>
using namespace std ;

int main()
{
    unsigned int n ;
    cin >> n ;
    int A = 1 , B = n ;
    while(true)
    {
        if (B >= 1)
        {
            A = A * B ;
            B = B - 1 ;
        }
        else
        {
            break ;
        }
    }
    cout << A ;
}
