#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    int F0 = 0 , F1 = 1 , F2 = F0 + F1 ;
    for(int i = 0 ; i < 5 ; i++)
    {
        cout << F2 << " " ;
        F0 = F1 ;
        F1 = F2 ;
        F2 = F0 + F1 ;
    }
}
