#include<iostream>
using namespace std ;
 
bool SoNguyenTo(int j)
{
    for(int i = 2 ; i*i <= j ; i++)
    if(j % i == 0) return false ;
    return true ;
}

bool SoDep(int i)
{
    for(int j = 2 ; j*j <= i ; j++)
    if(SoNguyenTo(j) && i % (j*j) == 0)
    return true ;
    return false ;
}

int main()
{
    int SoDau , SoCuoi ;
    cin >> SoDau >> SoCuoi ;

    for(int i = SoDau ; i <= SoCuoi ; i++)
    if(SoDep(i)) cout << i << " " ;
}
