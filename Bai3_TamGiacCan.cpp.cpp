#include<iostream>
using namespace std ;

int main()
{
    int a = 5 ;
    for(int i = 0 ; i < a ; i++)
    {
        cout << endl ;
        for(int j = 0 ; j <= i ; j++)
        cout << "*" ;
    }
}