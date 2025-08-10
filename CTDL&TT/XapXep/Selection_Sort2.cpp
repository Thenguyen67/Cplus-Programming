#include<iostream>
using namespace std ;

void SelectionSort(int A[] , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        int nn = i ;
        for(int j = i + 1 ; j < n ; j++)
        if(A[j] < A[nn]) nn = j ;

        swap(A[i] , A[nn]) ;

        // int temp = A[i] ;
        // A[i] = A[nn] ;
        // A[nn] = A[i] ;
    }
}

int main()
{
    int n ;
    cin >> n ;
    int A[n] ;

    for(int i = 0 ; i < n ; i++)
    cin >> A[i] ;

    SelectionSort(A , n) ;

    for(int i = 0 ; i < n ; i++)
    cout << A[i] << " " ;
}
