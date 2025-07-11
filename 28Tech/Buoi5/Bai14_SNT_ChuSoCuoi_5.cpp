#include<iostream>
using namespace std ; 

bool SoNgTo(int i)
{
    if(i < 2) return false ;
    for(int j = 2 ; j*j <= i ; j++)
    if(i % j == 0) return false ;
    return true ;
}

bool SoLonNhat(int i)
{
    if(i < 10) return true ;

    int b = i % 10 ;
    i = i / 10 ;
    while(i > 0)
    {
        int c = i % 10 ;
        if(c > b) return false ;
        i = i / 10 ;
    }
    return true ;
}

int main()
{
    int SoLuong = 0 ;
    int n ;
    cin >> n ;

    for(int i = 1 ; i <= n ; i++)
    {
        if(SoNgTo(i)) 
        if(SoLonNhat(i))
        {
            SoLuong++ ;
            cout << i << " " ;
        }
    }
    cout << endl << SoLuong ;
}
