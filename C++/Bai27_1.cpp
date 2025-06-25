#include<iostream>
using namespace std ;

int main()
{
    unsigned int Day ;
    cin >> Day ;
    cout << int(Day / 365) << " " << int((Day % 365) / 7) << " " << int((Day % 365) % 7) ;
 }