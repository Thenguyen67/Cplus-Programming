#include <iostream>
#include <vector>
#include <cstdio> // Thư viện cần thiết cho freopen
using namespace std;

int main() 
{
    // Dòng quan trọng: chuyển hướng stdin đọc từ file "input.txt"
    freopen("input.txt", "r", stdin);

    int a, b;cin >> a >> b; // Đọc 2 số 10 và 20 từ file
    string name ; cin >> name ; // Đọc chuỗi "Alice" từ file
    int n ; cin >> n ;

    vector<double> arr(n) ;
    for (int i = 0; i < n; i++) cin >> arr[i] ;

    // In ra để kiểm tra kết quả
    cout << "Hai so nguyen: " << a << " " << b << endl ;
    cout << "Ten: " << name << endl ;
    cout << "Day so thuc: " ;
    for(double x : arr) cout << x << " " ;
    cout << endl;
}