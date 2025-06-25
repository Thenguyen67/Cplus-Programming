#include<iostream>
using namespace std ;

int main() 
{
    char InHoa ;
    cin >> InHoa ;
    if (InHoa >= 'A' && InHoa < 'Z')
    {
        cout << char(InHoa + 33) ;
    }
    else if (InHoa == 'Z')
    {
        cout << char(InHoa + 7) ;
    }
    else if (InHoa >= '0' && InHoa <= '9')
    {
        cout << char(InHoa + 60) ;
    }
    else
    {
        cout << InHoa ;
    }
}