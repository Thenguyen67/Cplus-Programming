// [Set Map]. Bài 1. Phần tử phân biệt
// Cho dãy số A[] gồm có N phần tử, bạn hãy đếm xem trong mảng có bao nhiêu phần tử
// phân biệt?  Không dùng set, map
// Input Format
// Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]
// Constraints
// 1≤ N ≤ 10^5; -10^9 ≤ A[i] ≤ 10^9
// Output Format
// In ra số lượng phần tử khác nhau trong mảng.
// Sample Input 0
// 5
// 2 1 2 1 3
// Sample Output 0
// 3

#include<iostream>
using namespace std ;

int partition(int a[], int low, int high)
{
    int pivot = a[high] ;
    int j = low -1 ;
    for(int i = low ; i < high ; i++)
    if(a[i] < pivot)
    {
        j++ ;
        swap(a[i], a[j]) ;
    }
    swap(a[j+1], a[high]) ;
    return j +1 ;
}

void quickSort(int a[], int low, int high)
{
    if(low < high)
    {
        int pi = partition(a, low, high) ;
        quickSort(a, low, pi-1) ;
        quickSort(a, pi+1, high) ;
    }
}

int main()
{
    int n ; cin >> n ;
    int a[n] ;
    for(int &x : a) cin >> x ; 

    quickSort(a, 0, n-1) ;
    // Hoặc sử dụng thư viện algorithm sài hàm sort(a, a+n) cho nhanh 
    int j = 1 ;
    for(int i = 1 ; i < n ; i++)
    if(a[i] != a[i-1]) j++ ;

    cout << j ;
}