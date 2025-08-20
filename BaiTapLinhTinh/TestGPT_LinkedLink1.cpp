#include<iostream>
using namespace std ;

struct Node
{
    int data ;
    Node* next ;
};

Node* CreateNode(int value)
{
    Node *a = new Node() ;
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
    Node* temp = head ;
    while(temp != nullptr)
    {
        cout << temp->data << " " ;
        temp = temp->next ;
    }
}

int main()
{
    Node* head = nullptr ;
    int value ;
    int selection ;

    do 
    {
        cout << "1. Nhap phan tu " << endl ;
        cout << "2. In danh sach" << endl ;
        cin >> selection ;
        switch(selection)
        {
            case 1 : 
            cin >> value ;
            AddNode(head , value) ; break ;

            case 2 : PrintList(head) ; break ;
            case 0 : cout << "Ket thuc " << endl ; break ;

            default : cout << "Loi !" << endl ;
        }
    }
    while(selection != 0) ;
}
