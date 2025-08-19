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

void InsertAtEnd(Node* &head , int value)
{
    Node* A = new Node(value) ;
    if(head == nullptr)
    {
        head = A ;
        return ;
    }

    Node* B = head ;
    while(B->next != nullptr)
    {
        B = B->next ;
    }
    B->next = A ;
    A->prev = B ;
}

void InsertAtHead(Node* &head)
{
    int value ;
    cin >> value ;
    Node* A = new Node(value) ;
    if(head == nullptr)
    {
        head = A ;
        return ;
    }
    head->prev = A ;
    A->next = head ;
    head = A ;
}

void InsertAtPos(Node* &head , int pos)
{
    int value ;
    cin >> value ;
    Node* A = new Node(value) ;
    if(head == nullptr || pos == 0)
    {
        InsertAtHead(head)
    }

    Node* A = new Node(value) ;
    Node* B = head ;
    int index = 0 ;
    while()
}

void SoLuong(Node* &head , int pos)
{
    int value ;
    for(int i = 1 ; i <= pos ; i++)
    {
        cin >> value ;
        InsertAtEnd(head , value) ; 
    }
}

int main()
{
    Node* head = nullptr ;
    int choice , pos ;

    do 
    {
        cin >> choice ;
        switch(choice)
        {
            case 1 :
                cin >> pos ;
                SoLuong(head , pos) ;
                break ;

            case 2 :
                InsertAtHead(head) ;
                break ;

            case 3 :
                cin >> pos ;
                InsertAtPos(head , pos) ;
                break ;
        }
    }
}