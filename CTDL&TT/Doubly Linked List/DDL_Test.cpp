#include<iostream>
using namespace std ;

struct node
{
    int data ;
    node* next ;
    node* prev ;
    node(int value)
    {
        data = value ;
        next = prev = nullptr ;
    }
};

void Insert(node* &head , int value)
{
    node* newnode = new node(value) ;
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

void PrintList(node* head) 
{
    node* temp = head ;
    if(head == nullptr)
    {
        cout << "\nKhong co phan tu " ;
    }

    while(temp != nullptr)
    {
        cout << temp->data << " " ;
        temp = temp->next ;
    }
    cout << endl ;
}

void InsertPos(node* &head , int value , int pos) 
{
    if(pos < 0) 
    {
        cout << "\nNhap lai" ;
    }
    node* newnode = new node(value) ;
    if(pos == 0 || head == nullptr)
    {
        newnode->next = head ;
        if(head != nullptr)
        {
            head->prev = newnode ;
        }
        head = newnode ;
        return ;
    }

    node* temp = head ;
    int count = 0 ;
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

void Delete(node* &head)
{
    node* temp = head ;
    while(temp != nullptr)
    {
        node* newnode = temp->next ;
        delete temp ;
        temp = newnode ;
    }
    head = nullptr ;
}

int main()
{
    node* head = nullptr ;
    int choice , value , pos ;

    do 
    {
        cout <<"1. Nhap phan tu vao danh sach" ;
        cout <<"\n2. In danh sach" ;
        cout <<"\n3. Nhap vao vi tri bat ki" ;
        cout <<"\n0. Ket thuc danh sach" ;
        cout << "\nChon : " ;

        cin >> choice ;
        switch(choice) 
        {
            case 1 : 
            {
                cout << "\nNhap vao gia tri : " ;
                cin >> value ;
                Insert(head , value) ;
                break ;
            }

            case 2 : 
            {
                cout << "\nDanh sach gom : " ;
                PrintList(head) ;
                break ;
            }

            case 3 :
            {
                cout << "\nNhap gia tri : " ;
                cin >> value ;
                cout << "\nNhap vi tri trong danh sach : " ;
                cin >> pos ;
                InsertPos(head , value , pos) ;
                break ;
            }

            case 0 :
            {
                cout << "\nKet thuc chuong trinh " ;
                Delete(head) ;
                break ;
            }

            default : cout << "\nLoi !" ;
        }
    }
    while(choice != 0) ;
}
