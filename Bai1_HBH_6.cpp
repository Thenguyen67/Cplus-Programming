#include<iostream>
using namespace std ;

int main()
{
    int Hang , Cot ;
    cin >> Hang >> Cot ;

    for(int i = 0 ; i < Hang ; i++)
    {
        for(int j = 0 ; j < i ; j++)
        cout << "~" ;

        for(int j = 0 ; j < Cot ; j++)
        cout << "*" ;

        cout << endl ;
    }
}