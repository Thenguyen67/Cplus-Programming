#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream myFile("data.txt") ;
    string line ;

    if (myFile.is_open())
    {
        cout << "Noi dung file:" << endl ;
        // 3. Đọc file theo từng dòng cho đến khi hết
        while (getline(myFile, line)) cout << line << endl ;
        myFile.close();
    }
    else cout << "Khong the mo file de doc hoac file khong ton tai." << endl ;
}