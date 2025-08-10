//pass by reference (truyen tham chieu)
//pass by value (truyen tham tri)

#include<iostream>
using namespace std ;

void tang1(int a)
{
    a = a + 100 ;
}

void tang2(int *a)
{
    *a = *a + 100 ;
}

int main()
{
    int a = 300 ;
    tang1(a) ;
    cout << a << endl ;

    tang2(&a) ;
    cout << a ;
}
