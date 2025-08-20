#include<iostream>
using namespace std ;

struct sinhvien
{
    string mssv , hoten ;
    float diemtb ;
};

struct node
{
    sinhvien data ;
    node* next ;
    node* prev ;
    node(sinhvien sv)
    {
        data = sv ;
        next = nullptr ;
        prev = nullptr ;
    }
};

void LastList(node* &head , sinhvien sv) 
{
    node* newnode = new node(sv) ;
    if(head == nullptr)
    {
        head = newnode ;
        return ;
    }
    node* copyhead = head ;

    while(copyhead->next != nullptr)
    {
        copyhead = copyhead->next ;
    }
    copyhead->next = newnode ;
    newnode->prev = copyhead ;
}

void PrintList(node* head)
{
    if(head == nullptr)
    {
        cout << "Danh sach rong !\n" ;
        return ;
    }
    node* copyhead = head ;

    int index = 0 ;
    while(copyhead != nullptr)
    {
        cout << endl << "Sinh vien thu " << index + 1 << endl ;
        cout << "Ho va ten : " << copyhead->data.hoten << endl ;
        cout << "MSSV : " << copyhead->data.mssv << endl ;
        cout << "Diem trung binh mon : " << copyhead->data.diemtb << endl ; 
        copyhead = copyhead->next ;
        index++ ;
    }
    cout << endl ;
}

node* FindSV(node* head , string mssv)
{
    node* copyhead = head ;
    while(copyhead != nullptr)
    {
        if(copyhead->data.mssv == mssv)
        {
            return copyhead ;
        }
        copyhead = copyhead->next ;
    }
    return nullptr ;
}

void DeleteMSSV(node* &head, const string mssv)
{
  node* copyhead = head ;
  while(copyhead != nullptr)
  {
    if(copyhead->data.mssv == mssv)
    {
        if(copyhead == head)
        {
            head = copyhead->next ;
            if(head != nullptr)
            {
                head->prev = nullptr ;
            }
        }

        else if (copyhead->next == nullptr)
        {
            copyhead->prev->next = nullptr ;
        }

        else
        {
            copyhead->prev->next = copyhead->next ;
            copyhead->next->prev = copyhead->prev ;
        }

        delete copyhead ;
        return ;
    }
    copyhead = copyhead->next ;
  }
  cout << "Khong tim thay \n" ; 
}

void FindHighestMark(node* head)
{
    if(head == nullptr) return ;
    node* copyhead = head ;
    float Hightest = copyhead->data.diemtb ;
    while(copyhead != nullptr)
    {
        if(copyhead->data.diemtb > Hightest)
        {
            Hightest = copyhead->data.diemtb ;
        }
        copyhead = copyhead->next ;
    }
    cout << Hightest ;
}

int main()
{
    node* head = nullptr ;
    int choice ;

    do 
    {
        cout << "1. Them sinh vien vao cuoi danh sach\n" ;
        cout << "2. Hien thi danh sach sinh vien\n" ;
        cout << "3. Tim sinh vien theo MSSV\n" ;
        cout << "4. Xoa sinh vien theo MSSV\n" ;
        cout << "5. Tim sinh vien co diem trung binh cao nhat\n" ;
        cout << "6. Ket thuc danh sach\n" ;
        cout << "Chon : " ;
        
        cin >> choice ;
        switch(choice) 
        {
            case 1 :
            {
                sinhvien sv ;
                cin.ignore() ;
                cout << endl << "Ho va ten : " ;
                getline(cin , sv.hoten) ;
                cout << "MSSV : " ;
                getline(cin , sv.mssv) ;
                cout << "Diem trung binh : " ;
                cin >> sv.diemtb ;
                cout << endl ;
                cin.ignore() ;
                LastList(head , sv) ;
                break ;
            }

            case 2 :
                PrintList(head) ;
                break ;

            case 3 :
            {
                string mssv ;
                cout << "Nhap MSSV can tim : " ;
                getline(cin , mssv) ;
                node* sv = FindSV(head , mssv) ;
                if(sv != nullptr)
                {
                    cout << "Tim thay : " << sv->data.hoten << " " << sv->data.mssv << " " << sv->data.diemtb ;
                }
                else
                {
                    cout << "Khong tim thay \n" ;
                }
                break ;
            }

            case 4 : 
            {
                string mssv ;
                cout << "MSSV can xoa : " ;
                getline(cin , mssv) ;
                DeleteMSSV(head , mssv) ;
                break ;
            }

            case 5 :
            {
                cout << "Sinh vien cos diem trung binh " ;
                FindHighestMark(head) ;
                break ;
            }

            case 6 :
            {
                cout << "Ket thuc danh sach" ;
                break ;
            }

            default : cout << "Nhap sai ! Vui long nhap lai " ;
        }
    }
    while(choice != 6) ;
}