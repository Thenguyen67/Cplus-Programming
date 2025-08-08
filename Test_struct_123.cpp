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

void NhapDanhSach(NhanVien ds[] , int &SoLuong)
{
    cout << "Nhap so luong nhan vien : " ;
    cin >> SoLuong ;
    cin.ignore() ;

    for(int i = 0 ; i < SoLuong ; i++)
    {
        cout << i + 1 << ". Ho va ten : " ;
        getline(cin , ds[i].HoTen) ; 

        cout << "- Ngay sinh : (xx/yy/xxyy) : " ;
        cin >> ds[i].NgaySinh.Ngay >> ds[i].NgaySinh.Thang >> ds[i].NgaySinh.Nam ;

        cout << "- Gioi tinh ( Nu : 0 , Nam : 1) : " ;
        cin >> ds[i].GioiTinh ;

        cout << "- Luong/Thang : " ;
        cin >> setprecision(0) >> fixed >> ds[i].Luong ;
        
        cin.ignore() ;
        cout << endl ;
    }
}

void InDanhSach(NhanVien ds[] , int SoLuong)
{
    for(int i = 0 ; i < SoLuong ; i++)
    {
        cout << "Nhan vien thu " << i + 1 << ":" << endl ;
        cout << "Ho va ten : " << ds[i].HoTen << endl ;
        cout << "Ngay sinh : " << ds[i].NgaySinh.Ngay << "/" << ds[i].NgaySinh.Thang << "/" << ds[i].NgaySinh.Nam << endl ;
        cout << "Gioi tinh : " << (ds[i].GioiTinh == 1 ? "Nam" : "Nu") << endl ;
        cout <<"Luong/Thang : " <<setprecision(0) << fixed << ds[i].Luong << endl ;
        cout << endl ;
    }
}

void LietKeTuoi(NhanVien ds[] , int SoLuong)
{
    int NamHienTai = 2025 ;
    for(int i = 0 ; i < SoLuong ; i++)
    {
        if(NamHienTai - ds[i].NgaySinh.Nam  > 40 )
        {
            cout << "Nhan vien thu " << i + 1 << ":" << endl ;
            cout << "Ho va ten : " << ds[i].HoTen << endl ;
            cout << "Ngay sinh : " << ds[i].NgaySinh.Ngay << "/" << ds[i].NgaySinh.Thang << "/" << ds[i].NgaySinh.Nam << endl ;
            cout << "Gioi tinh : " << (ds[i].GioiTinh == 1 ? "Nam" : "Nu") << endl ;
            cout <<"Luong/Thang : " <<setprecision(0) << fixed << ds[i].Luong << endl ;
            cout << endl ;
        }
    }
}

void LietKeLuong(NhanVien ds[] , int SoLuong)
{
    for(int i = 0 ; i < SoLuong ; i++)
    {
        if(ds[i].Luong  > 1000000 )
        {
            cout << "Nhan vien thu " << i + 1 << ":" << endl ;
            cout << "Ho va ten : " << ds[i].HoTen << endl ;
            cout << "Ngay sinh : " << ds[i].NgaySinh.Ngay << "/" << ds[i].NgaySinh.Thang << "/" << ds[i].NgaySinh.Nam << endl ;
            cout << "Gioi tinh : " << (ds[i].GioiTinh == 1 ? "Nam" : "Nu") << endl ;
            cout <<"Luong/Thang : " <<setprecision(0) << fixed << ds[i].Luong << endl ;
            cout << endl ;
        }
    }
}

void LietKeThuTu(NhanVien ds[] , int SoLuong)
{
    for(int i = 0 ; i < SoLuong ; i++)
    {
        for(int j = i + 1 ; j < SoLuong ; j++)
        if(ds[i].NgaySinh.Nam < ds[j].NgaySinh.Nam)
        swap(ds[i] , ds[j]) ;
    }
    InDanhSach(ds , SoLuong) ;
}

void Menu()
{
    int const ToiDa = 100 ;
    NhanVien ds[ToiDa] ;

    int SoLuong = 0 ;
    int LuaChon ;
    do 
    {
        cout << "1. Nhap danh sach ." << endl ;
        cout << "2. In danh sach ." << endl ;
        cout << "3. Liet ke danh sach nhan vien > 40 tuoi ." << endl ;
        cout << "4. Liet ke danh sach nhan vien co luong > 1tr ." << endl ;
        cout << "5. Danh sach nhan vien sap xep giam dan theo nam sinh ." << endl ;

        cin >> LuaChon ;

        switch(LuaChon)
        {
            case 1 : NhapDanhSach(ds , SoLuong) ; break ;
            case 2 : InDanhSach(ds , SoLuong) ; break ;
            case 3 : LietKeTuoi(ds , SoLuong) ; break ;
            case 4 : LietKeLuong(ds , SoLuong) ; break ;
            case 5 : LietKeThuTu(ds , SoLuong) ; break ;
            case 0 : cout << "Ket thuc ." ; break ;

            default : cout << "Loi ! Vui long nhap lai ." ;
        }
    }
    while(LuaChon != 0) ;
}

int main()
{
    Menu() ;   
}