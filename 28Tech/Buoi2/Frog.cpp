#include<iostream>
using namespace std ;

int main()
{
    int Right , Left , Step ;
    cin >> Right >> Left >> Step ;
    if (Step % 2 == 1)
    {
        cout << (Step/2 +1)*Right - (Step/2)*Left ;
    }
    else 
    {
        cout << (Step/2)*Right - (Step/2)*Left ;
    }
}
