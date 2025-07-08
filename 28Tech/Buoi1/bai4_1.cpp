#include<iostream>
#include<iomanip>
using namespace std ;

int main()
{
    long long a , b ;
    cin >> a >> b ;
    float s = a / b * 1.0 ;
    cout << a + b <<" "<< a - b <<" "<< a * b <<" "<< fixed << setprecision(2) << s ;
    return 0 ;
}
