#include<iostream>
using namespace std ; 

int GiaiThua(int a)
{
    int b = 1 ;
    for(int i = 1 ; i <= a ; i++)
    b = b * i ;

    return b ;
}

int main()
{
    int n ;
    cin >> n ;

    for(int i = 0 ; i < n ; i++)
    {
        cout << endl ; 
        for(int j = 0 ; j <= i ; j++)
        {
            cout << GiaiThua(i)/(GiaiThua(j) * GiaiThua(i - j)) << " " ;
        }
    }
}
