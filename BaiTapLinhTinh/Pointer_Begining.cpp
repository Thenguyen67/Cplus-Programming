#include<iostream>
using namespace std ;

int main()
{
    int a = 300 ;
    int *ptr ; // Khai bao con tro NULL 

    ptr = &a ; //ptr tro vao bien a 

    cout << *ptr << endl ; // khi nay *ptr = 300

    // Neu in ra &a va ptr thi se thay ket qua 
    // giong nhau (deu la dia chi trong bo nho)

    *ptr = 1000 ; 
    
    cout << *ptr << endl ;
    cout << a ;
    //Vi ptr da tham chieu toi bien a nen khi 
    // gia tri ptr thay doi thi a cung se thay doi theo
}
