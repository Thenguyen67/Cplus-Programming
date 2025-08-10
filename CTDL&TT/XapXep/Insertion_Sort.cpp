#include<iostream>
using namespace std ;

void InsertionSort(int A[] , int n)
{
    for(int i = 1 ; i < n ; i++)
    {
        int key = A[i] ;
        int j = i - 1 ;

        while(j >= 0 && A[j] > key)
        {
            A[j+1] = A[j] ;
            j-- ;
        }
        A[j+1] = key ;
    }
}

int main()
{
    int n = 5 ;
    int A[] = {10 , 8 , 7 , 12 , 1} ;

    InsertionSort(A , n) ;
    for(int i = 0 ; i < n ; i++)
    cout << A[i] << " " ;
}
