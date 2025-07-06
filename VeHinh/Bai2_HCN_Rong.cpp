#include<iostream>
using namespace std ;

int main()
{
    int a = 4 , b = 5 ;

    for(int i = 1 ; i <= a ; i++)
    {
        for(int j = 1 ; j <= b ; j++)
        {
            if(i == 1 || i == a || j == 1 || j == b) cout << "*" ;
            else cout << " " ;
        }
        cout << endl ;
    }
}
