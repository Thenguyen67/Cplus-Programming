// [Set Map]. Bài 1. Phần tử phân biệt
// Cho dãy số A[] gồm có N phần tử, bạn hãy đếm xem trong mảng có bao nhiêu phần tử
// phân biệt?  Sử dụng map
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
#include<map>
using namespace std ;

int main()
{
    map<int, int> m ;
    int n ; cin >> n ;
    int a[n] ;

    for(int &x : a) 
    {
        cin >> x ;
        m[x] = 1 ;
    }
    cout << m.size() ;
}