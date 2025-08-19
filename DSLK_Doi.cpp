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
        prev = nullptr ;
        next = nullptr ;
    }
};

void insertAtHead(Node* &head , int value)
{
    Node* newNode = new Node(value) ;
    if(head != nullptr)
    {
        newNode->next = head ;
        head->prev = newNode ;
    }
    head = newNode ;
}

void displayForward(Node* head)
{
    cout << "Danh sach(tu dau den cuoi) : " ;
    Node* temp = head ; 
    while(temp != nullptr)
    {
        cout << temp->data << " " ;
        temp = temp->next ;
    }
    cout << endl ;
}

void displayBackward(Node* head)
{
    if(head == nullptr) return ;
    Node* temp = head ;
    while(temp->next != nullptr)
    {
        temp = temp->next ;
    }
    cout << "Danh sach (tu cuoi ve dau) : " ;
    while(temp != nullptr)
    {
        cout << temp->data << " " ;
        temp = temp->prev ;
    }
    cout << endl ;
}

int main()
{
    Node* head = nullptr ;
    insertAtHead(head , 10) ;
    insertAtHead(head , 20) ;
    insertAtHead(head , 30) ;
    displayForward(head) ;
    displayBackward(head) ;
}