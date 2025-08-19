#include<iostream>
using namespace std ;

struct SinhVien
{
    string hoten , mssv , lop ;
};

struct node
{
    SinhVien data ;
    node* next ;
};

node* CreateNode(SinhVien sv)
{
    node* a = new node() ;
    a->data = sv ;
    a->next = nullptr ;
    return a ;
}

void AddNode(node* &head)
{
    SinhVien sv ;
    cin.ignore() ;
    cout << "Ho va ten : " ;
    getline(cin , sv.hoten) ;
    cout << "MSSV : " ;
    getline(cin , sv.mssv) ;
    cout << "Lop hoc : " ;
    getline(cin , sv.lop) ;

    node* newNode = CreateNode(sv) ;
    if(head == nullptr)
    {
        head = newNode ;
        return ;
    }
    
    node* temp = head ;
    while(temp->next != nullptr)
    {
        temp = temp->next ;
    }
    temp->next = newNode ;
}

void PrintList(node* head)
{
    if(head == nullptr)
    {
        cout << "Danh sach rong " ;\
        return ;
    }
    while(head != nullptr)
    {
        cout << "Ho va ten : " << head->data.hoten << endl ;
        cout << "MSSV : " << head->data.mssv << endl ;
        cout << "Lop : " << head->data.lop << endl ;
        head = head->next ;
    }

}

void FreeList(node* &head)
{
    while (head != nullptr)
    {
        node* temp = head;  
        head = head->next;   
        delete temp;         
    }
}


int main()
{
    node* head = nullptr ;
    int choice ;

    do 
    {
        cout << "1. Nhap phan tu" << endl ;
        cout << "2. In danh sach" << endl ;

        cin >> choice ;
        switch(choice)
        {
            case 1 : AddNode(head) ; break ;
            case 2 : PrintList(head) ; break ;
            case 0: FreeList(head) ;
            cout << "Ket thuc chuong trinh" << endl ; break ;


            default : cout << "Nhap sai" << endl ;
        }
    }
    while(choice != 3) ;
}