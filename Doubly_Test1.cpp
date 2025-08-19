#include<iostream>
using namespace std ;

struct Node
{
    int data ;
    Node* prev ;
    Node* next ;
};

Node* CreateNode(int value)
{
    Node* a = new Node() ;
    a->data = value ;
    a->prev = nullptr ;
    a->next = nullptr ;
    return a ;
}

void AddNode(Node* &head , int value)
{
    Node* newNode = CreateNode(value) ;
    if(head == nullptr)
    {
        head = newNode ;
        return ;
    }
    Node* temp = head ;
    while(temp->next != nullptr)
    {
        temp = temp->next ;
    }
    temp->next = newNode ;
    newNode->prev = temp ;
}

void PrintList(Node* head)
{
    Node* temp = head ;
    while(temp != nullptr)
    {
        cout << temp->data << " " ;
        temp= temp->next ;
    }
    cout << endl ;
}

int main()
{
    Node* head = nullptr ;  
    int value , choice ;
    
    do 
    {
        cout << "1. Nhap phan tu" << endl ;
        cout << "2. In danh sach" << endl ;
        cout << "0. Ket thuc chuong trinh" << endl ;
        cout << "Lua chon : " ;
        cin >> choice ;
        switch(choice)
        {
            case 1 :
                cin >> value ;
                AddNode(head , value) ;
                break ;
            case 2 :
                PrintList(head) ;
                break ;
            case 0 : 
                cout << "Ket thuc danh sach" << endl ;
                break ;
            default : 
                cout << "Nhap sai ! Vui long nhap lai" << endl ;
        }
    }
    while(choice != 0) ;
}