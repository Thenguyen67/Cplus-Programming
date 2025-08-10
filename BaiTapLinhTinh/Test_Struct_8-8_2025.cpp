#include<iostream>
using namespace std ;

struct SinhVien
{
    string HoTen ;
    float DiemToan , DiemVan ;
};

void NhapDanhSach(SinhVien ds[] , int &n)
{
    cout << "So luong sinh vien trong danh sach : " ;
    cin >> n ;
    cout << endl ;
    cin.ignore() ;

    for(int i = 0 ; i < n ; i++)
    {
        cout << "Sinh vien thu " << i + 1 << ": " << endl ;
        cout << "Ho va ten : " ;
        getline(cin , ds[i].HoTen) ;

        cout << "Diem toan : " ;
        cin >> ds[i].DiemToan ;

        cout << "Diem van : " ;
        cin >> ds[i].DiemVan ;
        cin.ignore() ;
        cout << endl ;
    }
}

void InDanhSach(SinhVien ds[] , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout << "Nhan vien thu " << i + 1 << " : " << endl ;
        cout << "Ho ten : " << ds[i].HoTen << endl ;
        cout << "Diem toan : " << ds[i].DiemToan << endl ;
        cout << "Diem van : " << ds[i].DiemVan << endl ;
        cout << "Diem trung binh : " << (float) (ds[i].DiemToan + ds[i].DiemVan) / 2 << endl ;
        cout << endl ;
    }
}

void InDanhSach2(SinhVien ds[] , int i)
{
    {
        cout << "Sinh vien thu " << i + 1 << " : " << endl ;
        cout << "Ho ten : " << ds[i].HoTen << endl ;
        cout << "Diem toan : " << ds[i].DiemToan << endl ;
        cout << "Diem van : " << ds[i].DiemVan << endl ;
        cout << "Diem trung binh : " << (float) (ds[i].DiemToan + ds[i].DiemVan) / 2 << endl ;
        cout << endl ;
    }
}

void LietKeDiem(SinhVien ds[] , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        if(ds[i].DiemToan < 5)
        InDanhSach2(ds , i) ;
    }
}

void DanhSachGioi(SinhVien ds[] , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        if(ds[i].DiemToan > 8 && ds[i].DiemVan > 8)
        InDanhSach2(ds , i) ;
    }
}

void DanhSach() 
{
    SinhVien ds[100] ;
    int n = 0 ;
    int LuaChon ;

    do 
    {
        cout << "1. Nhap danh sach sinh vien " << endl ;
        cout << "2. In danh sach sinh vien " << endl ;
        cout << "3. LietKeDiem<5" << endl ;
        cout << "4. So luong sinh vien co diem >8 " << endl ;
        cout << "5. Danh sach diem giam dan theo trung binh " << endl ;

        cin >> LuaChon ;

        switch(LuaChon)
        {
            case 1 : NhapDanhSach(ds , n) ; break ;
            case 2 : InDanhSach(ds , n) ; break ;
            case 3 : LietKeDiem(ds , n) ; break ;
            case 4 : DanhSachGioi(ds , n) ; break ;
            // case 5 : DanhSachGiamDan(ds , n) ; break ;
            case 0 : cout << "Ket thuc danh sach " << endl ; break ;
            default : cout << "Nhap sai roi thang ngu " << endl ;
        }
    }
    while(LuaChon != 0) ;  
}

int main()
{
    DanhSach() ;
}
