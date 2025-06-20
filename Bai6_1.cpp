#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std ;

int main()
{
    int x1 , x2 , y1 , y2 ;
    cin >> x1 >> x2 >> y1 >> y2 ;
   float KhoangCach = sqrt(pow(x2 - x1 , 2)+ pow(y2 - y1 , 2)) ;
   cout << fixed << setprecision(2) << KhoangCach ;
}