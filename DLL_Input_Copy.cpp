#include<iostream>
using namespace std ;

struct Node
{
    int data ;
    Node* prev ;
    Node* next ;
    Node(int value)
    {
        data = value ;
        next = nullptr ;
        prev = nullptr ;
    }
};


void AddNode2(Node* &head , int value)
{
    Node* newNode = new Node(value) ;
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

void AddNode(Node* &head , int n)
{
    for(int i = 1 ; i <= n ; i++)
    {
        int value ;
        cout << "Phan tu thu " << i << " la : " ;
        cin >> value ;

        AddNode2(head , value) ;
    }
}

void PrintList(Node* head)
{
    Node* temp = head ;
    while(temp != nullptr)
    {
        cout << temp->data << " " ;
        temp = temp->next ;
    }
    cout << endl ;
}

int main()
{
    Node* head = nullptr ;
    int n , choice ;

    do 
    {
        cout << "\n Danh sach \n" ;
        cout << "1. Nhap danh sach " << endl ;
        cout << "2. In tu A-Z " << endl ;
        cout << "0. Ket thuc " << endl ;
        cout << "Lua chon : " ;
        cin >> choice ;
        switch(choice)
        {
            case 1 :
                cout << "Nhap so luong phan tu :" ;
                cin >> n ;
                AddNode(head , n) ;
                break ;

            case 2 : 
                PrintList(head) ;
                break ;

            case 0 :
                cout << "Ket thuc " << endl ;
                break ;
            
            default : cout << "Nhap sai " << endl ;
        }
    }
    while(choice != 0) ;
}