#include<iostream>
using namespace std ;

void insertionSort(int a[], int n)
{
    for(int i = 1; i < n; ++i)
    {
        int j = i ;
        while(j > 0 && a[i] < a[j-1]) --j ;
        int temp = a[i] ;
        for(int k = i; k > j; --k) a[k] = a[k-1] ;
        a[j] = temp ;
    }
}

int main()
{
    int n ; cin >> n ;
    int a[n] ;
    for(int &x : a) cin >> x ;
    insertionSort(a, n) ;
    for(int x : a) cout << x << " " ;
}