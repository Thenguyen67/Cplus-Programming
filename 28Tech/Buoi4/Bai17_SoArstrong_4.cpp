#include<iostream>
#include<cmath>
using namespace std ;

bool SoArmstrong(int i)
{
    int A = i ;
    int B = i ;
    int SoChuSo = 0 ;
    while(A > 0)
    {
        A = A / 10 ; 
        SoChuSo++ ;
    }
    
    int b = 0 ;
    while(i > 0)
    {
        int a = i % 10 ;
        b = b + pow(a , SoChuSo) ;
        i = i / 10 ;
    }
    return (b == B) ;
}

int main()
{
    int n ;
    cin >> n ;

    for(int i = 0 ; i < n ; i++)
    {
        if(SoArmstrong(i)) 
        {
            cout << i << " " ;
        }
    }
}
