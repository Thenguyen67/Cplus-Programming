#include<iostream>
using namespace std ;

struct sinhvien
{
    string hoten , mssv , lop ;
    int toan , van , anh ;
};

struct node
{
    sinhvien data ;
    node* next ;
    node* prev ;
    node(sinhvien sv)
    {
        data = sv ;
        next = prev = nullptr ;
    }
};

void addnode(node* &head)
{
    sinhvien sv ;

    cin.ignore() ;
    cout << "\nHo va ten : " ; getline(cin , sv.hoten) ;
    cout << "MSSV        : " ; getline(cin , sv.mssv) ;
    cout << "Lop         : " ; getline(cin , sv.lop) ;
    cout << "Diem toan   : " ; cin >> sv.toan ;
    cout << "Diem van    : " ; cin >> sv.van ;
    cout << "Diem anh    : " ; cin >> sv.anh ;
    cout << endl ;

    node* newnode = new node(sv) ;
    if(head == nullptr)
    {
        head = newnode ;
        return ;
    }

    node* temp = head ;
    while(temp->next != nullptr) 
    {
        temp = temp->next ;
    }
    temp->next = newnode ;
    newnode->prev = temp ;
}

void addpos(node* &head , int pos)
{
    sinhvien sv ;
    cout << "Ho va ten : " ; getline(cin , sv.hoten) ;
    cout << "MSSV      : " ; getline(cin , sv.mssv) ;
    cout << "Lop       : " ; getline(cin , sv.lop) ;
    cout << "Diem toan : " ; cin >> sv.toan ;
    cout << "Diem van  : " ; cin >> sv.van ;
    cout << "Diem anh  : " ; cin >> sv.anh ;

    node* newnode = new node(sv) ;
    if(pos < 1)
    {
        cout << "\nVui long nhap lai !" ;
        return ;
    }
    if(pos == 1 || head == nullptr)
    {
        newnode->next = head ;
        if(head != nullptr) head->prev = newnode ;
        head = newnode ;
        return ;
    }

    node* temp = head ;
    int count = 1 ;
    while(temp->next != nullptr && count < pos - 1)
    {
        temp = temp->next ;
        count++ ;
    }

    newnode->next = temp->next ;
    newnode->prev = temp ;
    if(temp->next != nullptr)
    {
        temp->next->prev = newnode ;
    }
    temp->next = newnode ;
}

void print(node* head)
{
    node* temp = head ;
    if(temp == nullptr)
    {
        cout << "\nDanh sach rong !" ;
        return ;
    }
    int index = 1 ;
    while(temp != nullptr)
    {
        cout << "\nSinh vien thu " << index << ":" ;
        cout << "\nHo va ten : " << temp->data.hoten << endl ;
        cout << "MSSV      : " << temp->data.mssv << endl ;
        cout << "Lop       : " << temp->data.lop << endl ;
        cout << "Diem toan : " << temp->data.toan << endl ;
        cout << "Diem van  : " << temp->data.van << endl ;
        cout << "Diem anh  : " << temp->data.anh << endl ;
        index++ ;
        temp = temp->next ;
    }
    cout << endl ;
}

void freelist(node* head)
{
    cout << "\nKet thuc chuong trinh" ;
    node* temp = head ;
    while(temp != nullptr)
    {
        node* newnode = temp->next ;
        delete temp ;
        temp = newnode ;
    }
}

int main()
{
    node* head = nullptr ;
    int choice , pos ;

    do 
    {
        cout << "1. Them phan tu vao danh sach" ;
        cout << "\n2. In danh sach" ;
        cout << "\n3. Them phan tu vao vi tri chi dinh" ;
        cout << "\n4. Ket thuc danh sach" ;
        cout << "\n5. Thu nhap vao so 5 di" ;
        cout << "\nLua chon cua ban : " ;

        cin >> choice ;
        switch(choice)
        {
            case 1 : 
            {
                addnode(head) ;
                break ;
            }

            case 2 :
            {
                cout << "\nDanh sach : \n" ;
                print(head) ;
                break ;
            }

            case 3 :
            {
                cout << "\nNhap vao vi tri muon them : " ;
                cin >> pos ;
                cin.ignore() ;
                addpos(head , pos) ;
                break ;
            }

            case 4 :
            {
                freelist(head) ;
                break ;
            }

            default : cout << "\nLam gi co case 5 ? Nhap lai di thang ngu" ;
        }
    }
    while(choice != 4) ;
}