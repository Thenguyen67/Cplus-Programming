#include<iostream>
using namespace std ;

void bubbleSort(int a[], int n)
{
    for(int i = 0; i < n-1; ++i)
    {
        bool swapped = false ;
        for(int j = 0; j < n-1; ++j)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j], a[j+1]) ;
                swapped = true ;
            }
            if(!swapped) break ;
        }
    }
}

int main()
{
    int n ; cin >> n ;
    int a[n] ;
    for(int &x : a) cin >> x ;
    bubbleSort(a, n) ;
    for(int x : a) cout << x << " " ;
}