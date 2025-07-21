#include<iostream>
using namespace std ;

int main()
{
    int a ;
    cin >> a ;

    int d = a - 1 ;
    for(int i = 1 ; i <= a ; i++)
    {
        for(int b = 1 ; b <= d ; b++) // d = a 
        cout << "~" ;
        for(int c = 1 ; c <= a ; c++)
        cout << "*" ;
        cout << endl ;
        d-- ;
    }
}
