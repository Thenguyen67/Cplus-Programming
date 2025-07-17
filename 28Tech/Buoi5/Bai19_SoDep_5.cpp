#include<iostream>
using namespace std ;

bool SoNgTo(int i)
{
    if(i < 2) return false ;
    for(int j = 2 ; j*j <= i ; j++)
    if(i % j == 0) return false ;
    return true ; 
}

int NghichDao(int i)
{
    int DoiCho = 0 ;
    if(i < 10) return i ;
    while(i > 0)
    {
        int c = i % 10 ;
        DoiCho = DoiCho * 10 + c ;
        i = i / 10 ;
    }
    return DoiCho ;
}

int main()
{
    int a , b ;
    cin >> a >> b ;

    for(int i = a ; i <= b ; i++)
    if(SoNgTo(i) && SoNgTo(NghichDao(i)))
    cout << i << " " ;
}
