#include<iostream>
using namespace std ;

int main()
{
    int a , b ;
    cin >> a >> b ; // 4 && 5

    for(int i = 0 ; i < a ; i++)
    {
        cout << endl ;
        for(int j = 0 ; j < b ; j++)
        cout << "*" ;
    }
}