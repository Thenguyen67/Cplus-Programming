#include <iostream>
using namespace std ;

int main() {
    int nhoNhat, nhoNhi, p = 3 ;
    cin >> nhoNhat >> nhoNhi ;
    if(nhoNhat > nhoNhi) 
    {
        int a = nhoNhi ;
        nhoNhi = nhoNhat ;
        nhoNhat = a;
    }
    for(int i = 0; i < p; i++)
    {
        int t ;
        cin >> t ;

        if(t < nhoNhat) 
        {
            nhoNhi = nhoNhat;
            nhoNhat = t ;
        } 
        else if(t < nhoNhi) 
        {
            nhoNhi = t ;
        }
    }
    cout << nhoNhi ;
}