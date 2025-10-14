#include <iostream>
using namespace std ;

int numberZero(int n)
{
    int count = 0 ;
    while (n >= 5) //Giai thừa <5 thì không có số 0 nào
    {
        count = count + n/5 ; // 5/5 = 1 . Kết thúc thuật toán
        n = n / 5 ;
    }
    return count ;
}

int main()
{
    int n ; // n = 5
    cin >> n ;
    cout << numberZero(n) ;
}
