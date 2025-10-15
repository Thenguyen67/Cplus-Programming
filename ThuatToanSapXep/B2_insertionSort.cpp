#include<iostream>
using namespace std ;

int main()
{
    int n ; cin >> n ;
    int data[n] ;
    for(int &x : data) cin >> x ;

    for (int i = 1; i < n; i++) 
    {
        int j = i;
        while (j > 0 && data[i] < data[j-1]) --j;
        int tmp = data[i];
        for (int k = i; k > j; k--) data[k] = data[k-1];
        data[j] = tmp;
    }

    for(int x : data) cout << x << " " ;
} 