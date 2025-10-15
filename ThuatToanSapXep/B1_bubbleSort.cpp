#include<iostream>
using namespace std ;

void ChangePos(int &a, int &b)
{
    int copya = a ;
    a = b ;
    b = copya ;
}

void bubbleSort(int a[], int n)
{
    for(int i = 0; i < n-1; ++i)
    for(int j = 0; j < n-1; ++j)
    if(a[j] > a[j+1]) ChangePos(a[j], a[j+1]) ;
}

int main()
{
    int n ; cin >> n ;
    int a[n] ;
    for(int &x : a) cin >> x ;
    bubbleSort(a, n) ;
    for(int i = 0; i < n; ++i) cout << a[i] << " " ;
}