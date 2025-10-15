#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myFile("data.txt");

    if (myFile.is_open())
    {
        myFile << "Hello, day la dong dau tien.\n";
        myFile << "Day la dong thu hai, ghi so: " << 123 << endl;

        string myString = "Ghi du lieu tu bien string.";
        myFile << myString << endl;

        myFile.close();
        cout << "Ghi file thanh cong!" << endl;
    }
    else cout << "Khong the mo file de ghi." << endl ;
}