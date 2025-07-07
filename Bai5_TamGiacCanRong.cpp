#include<iostream>
using namespace std ;

int main()
{
    for(int i = 1 ; i <= 5 ; i++)
    {
        cout << endl ;
        for(int j = 1 ; j <= i ; j++)
        {

            if(j == i || j == 1 || i == 5) cout << "*" ;
            else cout << " " ;
        }
    }
}