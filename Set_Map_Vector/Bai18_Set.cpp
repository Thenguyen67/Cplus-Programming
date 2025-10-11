#include <iostream>
#include <string> 
#include <set>
using namespace std ;

int main() 
{
    set<string> s ;
    string word ;

    while(cin >> word) s.insert(word) ;

    cout << s.size() << endl ;

    if (!s.empty()) cout << *s.begin() << " " << *s.rbegin() << endl ;
    //rbegin là hàm ngược của begin , tức là lấy giá trị cuối cùng (lớn )
}
