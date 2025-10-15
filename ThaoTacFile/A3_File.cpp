#include <iostream>
#include <fstream>
using namespace std ;

int main()
{
    // Mở file ở chế độ ghi và thêm ios::app
    ofstream myFile("data.txt", ios::app) ;

    if (myFile.is_open())
    {
        myFile << "Day la dong duoc them vao.\n" ;
        myFile.close() ;
        cout << "Ghi them vao file thanh cong!" << endl ;
    }
    else cout << "Khong the mo file de ghi them." << endl ;
}