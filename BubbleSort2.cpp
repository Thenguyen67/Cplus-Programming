#include<iostream>
using namespace std ;

void BubbleSort(int A[] , int n) 
{
    for(int i = 0 ; i < n ; i++)
    {
        bool nn = false ;
        for(int j = 0 ; j < n - i - 1 ; j++)
        {
            if(A[j] > A[j+1])
            {
                 swap(A[j] , A[j+1]) ;
                 nn = true ;
            }
        }
        if(!nn) break ;
    }
}

int main()
{
    int n = 5 ;
    int A[] = {10 , 8 , 7 , 12 , 1} ;

    BubbleSort(A , n) ;
    for(int i = 0 ; i < n ; i++)
    cout << A[i] << " " ;
}