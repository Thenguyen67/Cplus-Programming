#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node* next;
};

Node* CreateNode(int value) 
{
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

void AddFirst(Node*& head, int value) 
{
    Node* newNode = CreateNode(value);
    newNode->next = head; 
    head = newNode;       
}

void AddLast(Node*& head, int value) 
{
    Node* newNode = CreateNode(value);
    if (head == nullptr) 
    {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) 
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void PrintList(Node* head) 
{
    if (head == nullptr) 
    {
        cout << "Danh sach rong!\n";
        return;
    }
    Node* temp = head;
    cout << "Danh sach: ";
    while (temp != nullptr) 
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

void FreeList(Node*& head) 
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
    int choice, value;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Them node vao dau\n";
        cout << "2. Them node vao cuoi\n";
        cout << "3. In danh sach\n";
        cout << "0. Thoat\n";
        cout << "Nhap lua chon: ";
        cin >> choice;

        switch (choice) 
        {
            case 1:
                cout << "Nhap gia tri: ";
                cin >> value;
                AddFirst(head, value);
                break;
            case 2:
                cout << "Nhap gia tri: ";
                cin >> value;
                AddLast(head, value);
                break;
            case 3:
                PrintList(head);
                break;
            case 0:
                cout << "Thoat chuong trinh...\n";
                break;
            default:
                cout << "Lua chon khong hop le!\n";
        }
    } 
    while (choice != 0);

    FreeList(head);

}
