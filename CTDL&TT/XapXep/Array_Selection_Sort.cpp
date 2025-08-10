#include<iostream>
using namespace std ;

void SelectionSort(int A[] , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        int MIN = i ;
        for(int j = i + 1 ; j < n ; j++)
        if(A[j] < A[MIN])
        MIN = j ;

        swap(A[i] , A[MIN]) ;
    }
}

int main()
{
    int A[50] ;
    int n = 10 ;
    for(int i = 0 ; i < n ; i++)
    cin >> A[i] ;

    SelectionSort(A , n) ;

    for(int i = 0 ; i < n ; i++)
    cout << A[i] << " " ;

}
