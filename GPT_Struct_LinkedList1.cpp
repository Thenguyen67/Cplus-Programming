#include <iostream>
using namespace std;

struct SinhVien
{
    string mssv , hoTen , lop;
};

struct Node
{
    SinhVien data;
    Node* next;
};

Node* CreateNode(SinhVien sv)
{
    Node* p = new Node();
    p->data = sv;
    p->next = nullptr;
    return p;
}

void AddNode(Node* &head)
{
    SinhVien sv;
    cin.ignore(); 
    cout << "Nhap MSSV: ";
    getline(cin, sv.mssv);
    cout << "Nhap Ho ten: ";
    getline(cin, sv.hoTen);
    cout << "Nhap Lop: ";
    getline(cin, sv.lop);

    Node* newNode = CreateNode(sv);

    if(head == nullptr)
    {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void PrintList(Node* head)
{
    if(head == nullptr) {
        cout << "Danh sach rong" << endl;
        return;
    }
    cout << "\n===== DANH SACH SINH VIEN =====\n";
    while(head != nullptr)
    {
        cout << "MSSV: " << head->data.mssv << endl;
        cout << "Ho ten: " << head->data.hoTen << endl;
        cout << "Lop: " << head->data.lop << endl;
        cout << "---------------------------\n";
        head = head->next;
    }
}

int main()
{
    Node* head = nullptr;
    int choice;

    do
    {
        cout << "\n1. Them sinh vien";
        cout << "\n2. In danh sach";
        cout << "\n0. Thoat";
        cout << "\nNhap lua chon: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                AddNode(head);
                break;
            case 2:
                PrintList(head);
                break;
            case 0:
                cout << "Ket thuc\n";
                break;
            default:
                cout << "Lua chon khong hop le\n";
        }
    } 
    while(choice != 0);
}
