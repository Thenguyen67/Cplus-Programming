#include<iostream>
using namespace std ;

int main()
{
    long long  Hang , Cot ;
    cin >> Hang >> Cot ;
    if (Hang % 2 == 0)
    {
        cout << (Hang/2)*Cot ;
    }
    else
    {
        cout << (Hang/2)*Cot + (Cot/2) ;
    }
}
