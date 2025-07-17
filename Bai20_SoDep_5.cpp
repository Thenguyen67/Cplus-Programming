#include<iostream>
using namespace std ;

bool SoNgTo(int j)
{
    for(int a = 2 ; a*a <= j ; a++)
    if(j % a == 0) return false ;
    return true ;
}

bool ChiaHet(int i)
{
    if(i < 2) return false ;
    for(int j = 2 ; j <= i ; j++)
    if(SoNgTo(j) && i % j == 0)
    if(i % (j*j) != 0)
    return false ;
    return true ;
}

int main()
{
    int a , b ;
    cin >> a >> b ;

    for(int i = a ; i <= b ; i++)
    if(ChiaHet(i)) cout << i << " " ;
}