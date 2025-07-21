#include<iostream>
using namespace std ;

int main()
{
    int Hang , Cot ;
    cin >> Hang >> Cot ;

    for(int i = 1 ; i <= Hang ; i++)
    {
        cout << endl ;

        if(i % 2 != 0)
        for(int i = 1 ; i <= Cot ; i++)
        cout << 1 ;

        else 
        for(int i = 1 ; i <= Cot ; i++)
        cout << 0 ;
    }
}
