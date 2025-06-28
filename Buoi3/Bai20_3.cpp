#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    int mi , ci ;
    int A = 0 , B = 0 ;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> mi >> ci ;
        if ( mi > ci)
        {
            A = A + 1;
        }
        else if (mi == ci)
        {
            A = A ;
            B = B ;
        }
        else
        {
            B = B + 1 ;
        }
    }
    if (A > B)
    {
        cout << "Mishka" ;
    }
    else if (A == B)
    {
        cout << "Friendship is magic!" ;
    }
    else
    {
        cout << "Chris" ;
    }
}
