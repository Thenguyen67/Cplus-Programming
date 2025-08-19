#include<iostream>
using namespace std ;

struct Node
{
    int data ;
    Node* next ;
};

Node* CreateNode(int value)
{
    Node* a = new Node() ;
    a->data = value ;
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
}

void PrintList(Node* head)
{
    if(head == nullptr)
    cout << "NULL" ;

    cout << "Danh sach : " ;
    while(head != nullptr)
    {
        cout << head->data << " " ;
        head = head->next ;
    }
    cout << endl ;
}
int main()
{
    Node* head = nullptr ;
    int value ;
    int selection ;

    do 
    {
        cout << "1. Nhap phan tu" << endl ;
        cout << "2. In danh sach" << endl ;
        cout << "0. Ket thuc" << endl ;
        cout << "Chon : " ;

        cin >> selection ;
        switch(selection)
        {
            case 1 : 
            cout << " Nhap : " ;
            cin >> value ;
            AddNode(head , value) ;
            break ;

            case 2 : PrintList(head) ; 
            break ;

            case 0 : cout << "Ket thuc lua chon" << endl ;
            break ;

            default : cout << "Nhap loi  ! , vui long nhap lai " << endl ;
        }
    }
    while(selection != 0) ;
}