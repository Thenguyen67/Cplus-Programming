#include<iostream>
using namespace std ;

int main()
{
    int a ;
    cin >> a ;

    int d = a ;
    for(int i = 1 ; i <= a ; i++)
    {
        for(int j = 1 ; j <= d ; j++)
        cout << "*" ;
        cout << endl ;
        d-- ;
    }
}
