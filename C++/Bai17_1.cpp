#include<iostream>
using namespace std ;

int main()
{
    int Month , Year ;
    cin >> Month >> Year ;
    if (Month <= 0 || Year <= 0 || Month > 12)
    {
        cout << "INVALID" ;
    }
    else if (Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0)
    {
        if (Month == 2)
        {
            cout << "29" ;
        }
        else if (Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12)
        {
            cout << "31" ;
        }
        else
        {
            cout << "30" ;
        }
    }
    else
    {
        if (Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12)
        {
            cout << "31" ;
        }
        else if (Month == 2)
        {
            cout << "28" ;
        }
        else
        {
            cout << "30" ;
        }
    }
}