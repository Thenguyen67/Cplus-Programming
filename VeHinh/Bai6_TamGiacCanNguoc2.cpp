#include<iostream>
using namespace std ;

int main()
{
    for(int i = 5 ; i >= 1 ; i--)
    {
        cout << endl ;
        for(int j = 1 ; j <= 5 ; j++)
        {
            if(j < i) cout << " " ;
            else cout << "*" ;
        }
    }
}
