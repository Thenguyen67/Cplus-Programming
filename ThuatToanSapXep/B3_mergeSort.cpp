#include <iostream>
using namespace std ;

// Hàm trộn hai nửa đã được sắp xếp
void merge(int a[], int left, int mid, int right)
{
    int n1 = mid - left + 1; // số phần tử nửa trái
    int n2 = right - mid;    // số phần tử nửa phải

    // Tạo mảng tạm
    int L[n1], R[n2];

    // Sao chép dữ liệu vào mảng tạm
    for(int i = 0; i < n1; ++i) L[i] = a[left + i];
    for(int j = 0; j < n2; ++j) R[j] = a[mid + 1 + j];

    // Gộp hai mảng tạm vào mảng chính a[]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j]) a[k++] = L[i++];
        else a[k++] = R[j++];
    }

    // Sao chép phần còn lại (nếu có)
    while (i < n1) a[k++] = L[i++];
    while (j < n2) a[k++] = R[j++];
}

// Hàm đệ quy merge sort
void mergeSort(int a[], int left, int right)
{
    if (left >= right) return ; // Mảng chỉ có 1 phần tử thì dừng

    int mid = (left + right) / 2;

    // Chia đôi mảng
    mergeSort(a, left, mid);
    mergeSort(a, mid + 1, right);

    // Trộn hai nửa lại
    merge(a, left, mid, right);
}

int main()
{
    int n ; cin >> n ;
    int a[n] ;
    for(int &x : a) cin >> x ;
    mergeSort(a, 0, n - 1) ;
    for(int x : a) cout << x << " " ;
}
