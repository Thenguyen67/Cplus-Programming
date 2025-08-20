#include<iostream>
using namespace std ;

struct Node
{
    int data ;
    Node* next ;
    Node* prev ;
};

Node* CreateNode(int value)
{
    Node* a = new Node ;
    a->data = value ;
    a->next = nullptr ;
    a->prev = nullptr ;
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
    while(temp != temp)
    {
        cout << temp->data << " " ;
        temp = temp->next ;
    }
}

int main()
{
    Node* head = nullptr ;
    int choice ;
    int value ;

    do 
    {
        cout << "1. Nhap danh sach " << endl ;
        cout << "2. In danh sach " << endl ;
        cout << "Chon : " ;

        cin >> choice ;
        switch(choice)
        {
            case 1 : 
            cin >> value ;
            AddNode(head , value) ;
            break ;

            case 2 : PrintList(head) ; break ;
            case 0 : FreeList(head) ; break ;

            default : cout << "Nhap loi" << endl ;
        }
    }
    while(choice != 0) ;
}
