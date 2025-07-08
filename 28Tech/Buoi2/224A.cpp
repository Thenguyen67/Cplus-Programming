#include<iostream>
#include<cmath>
using namespace std ;

int main()
{
    int S1 , S2 , S3 ;
    cin >> S1 >> S2 >> S3 ;
    int a = sqrt((S1*S3)/S2) ;
    int b = sqrt((S1*S2)/S3) ;
    int c = sqrt((S2*S3)/S1) ;
    cout << 4*(a + b + c) ;
}
