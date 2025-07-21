#include<iostream>
using namespace std ;

int main()
{
    string s ;
    cin >> s ;

    if(s == "()" || s == "{}" || s == "[]")
    cout << 1 ;
    else cout << 0 ;
}
