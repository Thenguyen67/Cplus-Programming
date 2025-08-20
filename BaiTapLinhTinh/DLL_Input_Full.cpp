#include <iostream>
using namespace std;

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

void InsertAtBeginning(Node* &head , int value)
{
    Node* newNode = new Node(value) ;
    if(head == nullptr)
    {
        head = newNode ;
        return ;
    }
    newNode->next = head ;
    head->prev = newNode ;
    head = newNode ;
}

void InsertAtPosition(Node* &head , int value , int pos)
{
    if(pos == 0)
    {
        InsertAtBeginning(head , value) ;
        return ;
    }

    Node* newNode = new Node(value) ;
    Node* temp = head ;
    int index = 0 ;
    while(temp != nullptr && index < pos -1 )
    {
        temp = temp->next ;
        index++ ;
    }

    if(temp == nullptr || temp->next == nullptr)
    {
        InsertAtEnd(head , value) ;
        delete newNode ;
        return ;
    }

    newNode->next = temp->next ;
    newNode->prev = temp ;
    temp->next->prev = newNode ;
    temp->next = newNode ;

}

void inputList(Node* &head, int n)
{
    int value ;
    for(int i = 1 ; i <= n ; i++)
    {
        cout << "Nhap gia tri cua " << i << " : " ;
        cin >> value ;
        InsertAtEnd(head , value) ;
    }
}

void printForward(Node* head)
{
    Node* temp = head;
    cout << "Danh sach tu dau den cuoi: ";
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        if (temp->next == nullptr) break;
        temp = temp->next;
    }
    cout << endl;
}

void printBackward(Node* head)
{
    if (head == nullptr) return;

    Node* temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    cout << "Danh sach tu cuoi ve dau: ";
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void inputList(Node*& head, int n)
{
    for (int i = 0; i < n; i++)
    {
        int value;
        cout << "Nhap gia tri thu " << i + 1 << ": ";
        cin >> value;
        InsertAtEnd(head, value);
    }
}

void freeList(Node*& head)
{
    Node* temp;
    while (head != nullptr)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main()
{
    Node* head = nullptr;
    int choice, value, pos, n;

    do
    {
        cout << "\n=== MENU ===\n";
        cout << "1. Nhap danh sach\n";
        cout << "2. Them vao dau\n";
        cout << "3. Them vao cuoi\n";
        cout << "4. Them vao vi tri bat ky\n";
        cout << "8. In danh sach tu dau -> cuoi\n";
        cout << "0. Thoat\n";
        cout << "Lua chon: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Nhap so phan tu: ";
            cin >> n;
            inputList(head, n);
            break;
        case 2:
            cout << "Nhap gia tri: ";
            cin >> value;
            InsertAtBeginning(head, value);
            break;
        case 3:
            cout << "Nhap gia tri: ";
            cin >> value;
            InsertAtEnd(head, value);
            break;
        case 4:
            cout << "Nhap gia tri: ";
            cin >> value;
            cout << "Nhap vi tri: ";
            cin >> pos;
            InsertAtPosition(head, value, pos);
            break;
        case 8:
            printForward(head);
            break;
        case 0:
            cout << "Thoat chuong trinh.\n";
            freeList(head);
            break;
        default:
            cout << "Lua chon khong hop le!\n";
        }
    }
    while (choice != 0);
}
