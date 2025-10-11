#include<iostream>
#include<map>
using namespace std ;

int main()
{
    map<string, string> m ;
 
    cout << "Nhap so luong sinh vien : " ;
    int n ; cin >> n ;

    while(n--)
    {
        cout << "MSSV : " ;
        string a ; cin >> a ;
        cout << "Ho va ten : " ;
        string b ; cin >> b ;
        m.insert({a, b}) ;
    }

    cout << "Nhap so luong truy van : " ;
    int queory ; cin >> queory ;
    while (queory--)
    {
        cout << "Truy van : " ;
        string a ; cin >> a ;
        auto it = m.find(a) ;
        if(it != m.end()) 
        {
            cout << it->second ;
            cout << endl ;
        }
        else cout << "NOT FOUND" ;
    }
}
