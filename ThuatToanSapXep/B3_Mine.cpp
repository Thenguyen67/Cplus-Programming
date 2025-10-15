#include<iostream>
using namespace std ;

void merge(int a[], int low, int mid, int high) 
{
    int n1 = mid - low + 1 ;
    int n2 = high - mid ;

    int L[n1], H[n2] ;
    for(int i = 0; i < n1; ++i) L[i] = a[low+i] ;
    for(int j = 0; j < n2; ++j) H[j] = a[mid+1+j] ;

    int i = 0, j = 0, k = low ;
    while(i < n1 && j < n2) 
    if(L[i] <= H[j]) a[k++] = L[i++] ;
    else a[k++] = H[j++] ; 

    while(i < n1) a[k++] = L[i++] ;
    while(j < n2) a[k++] = H[j++] ;
}

void mergeSort(int a[], int low, int high)
{
    if(low >= high) return ;
    int mid = (low+high)/2 ;
    mergeSort(a, low, mid) ;
    mergeSort(a, mid+1, high) ;

    merge(a, low, mid, high) ;
}

int main()
{
    int n ; cin >> n ;
    int a[n] ;
    for(int &x : a) cin >> x ;
    mergeSort(a, 0, n-1) ;
    for(int x : a) cout << x << " " ;
}