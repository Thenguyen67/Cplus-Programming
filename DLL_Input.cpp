#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
    Node(int value)
    {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

void insertAtEnd(Node*& head, int data)
{
    Node* newNode = new Node(data);
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
    newNode->prev = temp;
}

void printForward(Node* head)
{
    Node* temp = head;
    cout << "Danh sach tu dau den cuoi: ";
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
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
        insertAtEnd(head, value);
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
