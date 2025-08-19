#include<iostream>
using namespace std ;

struct Node
{
    int data ;
    Node* next ;
};

Node* CreateNode(int value)
{
    Node* head = new Node() ;
    head->data = value ;
    head->next = nullptr ;
    return head ;
}

Node* InputNode(Node* head , int value)
{
    cin >> value ;
    Node* heap = CreateNode(value) ;
    Node* Copyhead = head ;

    
}

int main()
{
    Node* head = nullptr ;
    int value ;
    int Selection ;
    do
    {
        cout << "1. Nhap data" << endl ;
        cout << "2. In danh sach" << endl ;
        cout << "3. Xoa head (First Node)" << endl ;
        cout << "4. Xoa Node cuoi cung " << endl ;
        cin >> Selection ;
        switch(Selection)
        {
            case 1 : InputNode(head , value) ; break ;
            // case 2 : ListNode() ; break ;
            // case 3 : DeleteHead() ; break ;
            // case 4 : DeleteLastNode() ; break ;
            case 0 : cout << "Ket thuc danh sach" << endl ;

            default : cout << "Nhap ma cung sai thi chiu" << endl ; 
        }
    }
    while(Selection != 0) ;
}