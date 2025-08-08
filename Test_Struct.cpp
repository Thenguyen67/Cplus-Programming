// Xet mot sinh vien 
// - Ho ten 
// - MSV 
// - Ngay sinh 
// - GPA 
// - Que quan

#include<iostream>
#include<string>
using namespace std ;

struct Sinhvien
{
    string Ten , MSV , NgSinh , QueQuan ;
    float GPA ; 
    void Xuat()
    {
        cout << Ten << " " << MSV << " " << NgSinh << " " << QueQuan << " " << GPA << endl ;
    }

    void Nhap()
    {
        getline(cin , Ten) ;
        cin >> MSV >> NgSinh ;
        cin.ignore() ;
        getline(cin , QueQuan) ;
        cin >> GPA ;
    }
};

void Nhap2(Sinhvien &a)
{
    getline(cin , a.Ten) ;
    cin >> a.MSV >> a.NgSinh ;
    cin.ignore() ;
    getline(cin , a.QueQuan) ;
    cin >> a.GPA ;
}

void Xuat2(Sinhvien a)
    {
        cout << a.Ten << " " << a.MSV << " " << a.NgSinh << " " << a.QueQuan << " " << a.GPA << endl ;
    }
// void Xuat2(Sinhvien a)
// {
//     cout << a.Ten << " " << a.MSV << " " << a.NgSinh << " " << a.QueQuan << " " << a.GPA << endl ;
// }

int main()
{
    Sinhvien x ;
    // Sinhvien y{"Nguyen Huy Dung" , "0382669" , "07/08/2006" , "ThanhHoa" , 2.6} ;
    // getline(cin , x.Ten) ;
    // cin >> x.MSV >> x.NgSinh ;
    // cin.ignore() ;
    // getline(cin , x.QueQuan) ;
    // cin >> x.GPA ;

    //x.Xuat() ;
    //Xuat2(x) ;

    // Xuat2(y) ;
    // y.Xuat() ;

    // x.Nhap() ;
    // x.Xuat() ;

    Sinhvien b ;
    Nhap2(b) ;
    Xuat2(b) ;
}