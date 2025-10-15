#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>

using namespace std;

// Hàm kiểm tra một số có phải là số nguyên tố hay không
bool isPrime(int n)
{
    if (n < 2) return false ;
    for (int i = 2; i <= sqrt(n); i++)
    if (n % i == 0) return false ;
    return true;
}

int main()
{
    // 1. Chuyển hướng luồng nhập để đọc từ file
    freopen("28tech_number.txt", "r", stdin);

    // 2. Chuyển hướng luồng xuất để ghi vào file
    freopen("28tech_prime.txt", "w", stdout);

    vector<int> prime_numbers;
    int number;

    // 3. Đọc tất cả các số từ file input cho đến khi hết
    while (cin >> number)// Nếu là số nguyên tố thì thêm vào vector
    if (isPrime(number)) prime_numbers.push_back(number) ;
    // 4. Sắp xếp vector chứa các số nguyên tố
    sort(prime_numbers.begin(), prime_numbers.end());

    // 5. In kết quả đã sắp xếp ra file output
    for (int p : prime_numbers) cout << p << " " ;
}