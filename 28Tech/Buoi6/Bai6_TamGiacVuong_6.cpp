#include<iostream>
using namespace std ;

int main()
{
    int ChieuCao ;
    cin >> ChieuCao ;

    for(int i = 0 ; i < ChieuCao ; i++)
    {
        for(int j = 0 ; j < i ; j++)
            cout << "~" ;

        for(int j = 0 ; j < ChieuCao - i ; j++)
            cout << "*" ;
    
        cout << endl ;
    }
}
