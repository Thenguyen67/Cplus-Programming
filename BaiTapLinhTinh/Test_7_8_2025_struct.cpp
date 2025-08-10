#include<iostream>
#include<iomanip>
using namespace std ;

struct Date
{
    int Ngay , Thang , Nam ;
};

struct NhanVien
{
    string HoTen ;
    Date NgaySinh ;
    int GioiTinh ;
    double Luong ;
};

int main()
{
    cout << "So luong nhan vien : " ;
    int SoLuong ;
    cin >> SoLuong ;
    cin.ignore() ;

    NhanVien ds[SoLuong] ;

    for(int i = 0 ; i < SoLuong ; i++)
    {
        cout << i + 1 << " Ho va ten : " ;
        getline(cin , ds[i].HoTen) ;
        
        cout << "- Ngay/Thang/Nam : " ;
        cin >> ds[i].NgaySinh.Ngay >> ds[i].NgaySinh.Thang >> ds[i].NgaySinh.Nam ;

        cout << "- Gioi tinh (Nam : 1 , Nu : 2) : " ;
        cin >> ds[i].GioiTinh ;

        cout << "- Luong/thang : " ;
        cin >> ds[i].Luong ;
        cin.ignore() ;
        cout << endl ;
    }

    for(int i = 0 ; i < SoLuong ; i++)
    {
        cout << i + 1 << " " << ds[i].HoTen << " " ;
        cout << ds[i].NgaySinh.Ngay << "/" << ds[i].NgaySinh.Thang << "/" << ds[i].NgaySinh.Nam << " "  ;
        cout << (ds[i].GioiTinh == 1 ? "Nam" : "Nu") << " " ;
        cout << setprecision(0) << fixed << ds[i].Luong << endl ;
    }
}
