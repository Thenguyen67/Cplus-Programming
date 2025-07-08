#include<iostream>
using namespace std ;

bool KtraSNT(int i)
{
    if(i < 2) return false ;
    for(int j = 2 ; j*j <= i ; j++)
    {
        if(i % j == 0) return false ;
    }
    return true ;
}

int main()
{
    int a , b ;
    cin >> a >> b ;

    for(int i = a ; i <= b ; i++)
    {
        if(KtraSNT(i)) cout << i << " " ;
    }
}
