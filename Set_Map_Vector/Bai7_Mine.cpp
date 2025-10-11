#include<iostream>
#include<vector>
using namespace std ;

int main()
{
    string st = "mghzbzhrucvwjssatuhlwcradwtbmyqdjcksyskvhrgcubvtoimrjwnanfqgenshrjtf" ;
    vector<int> v(26, 0) ;

    for(char c : st) v[c-'a']++ ;

    int min1 = -1 ;
    char max1 = ' ' ;
    for(int i = 0 ; i < 26 ; i++)
    if(v[i] > min1)
    {
        min1 = v[i] ;
        max1 = (char)(i + 'a') ;
    }
    cout << max1 << " " << min1 << endl ;

    int max2 = 1000 ;
    char min2 = ' ' ;
    for(int i = 0 ; i < 26 ; i++)
    if(v[i] > 0)
    if(v[i] <= max2)
    {
        max2 = v[i] ;
        min2 = (char)(i + 'a') ;
    }
    cout << min2 << " " << max2 << endl ;

    int count = 0 ;
    for(int i = 0 ; i < 26 ; i++)
    if(v[i] > 0) count++ ;

    cout << count ;
}