#include<iostream>
using namespace std ;

int main()
{
    int n , m , a ;
    int x , y ;
    cin >> n >> m >> a ;
    if (n % a == 0)
    {
        x = n / a ; 
    }
    else
    {
        x = n / a + 1 ;
    }
    if (m % a == 0)
    {
        y = m / a ;
    }
    else
    {
        y = m / a + 1 ;
    }
    cout << x * y ;
}
// Gia su nhap 3 4 2 thi output se la 4 . boi vi x la kieu du lieu nguyen nen 5/2 = 2
