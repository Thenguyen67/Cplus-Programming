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

void insertAtBeginning(Node*& head, int data)
{
    Node* newNode = new Node(data);
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

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

void insertAtPosition(Node*& head, int data, int pos)
{
    if (pos == 0)
    {
        insertAtBeginning(head, data);
        return;
    }

    Node* newNode = new Node(data);
    Node* temp = head;
    int index = 0;

    while (temp != nullptr && index < pos - 1)
    {
        temp = temp->next;
        index++;
    }

    if (temp == nullptr || temp->next == nullptr)
    {
        insertAtEnd(head, data);
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
}

void deleteAtBeginning(Node*& head)
{
    if (head == nullptr) return;

    Node* temp = head;
    head = head->next;
    if (head != nullptr)
    {
        head->prev = nullptr;
    }
    delete temp;
}

void deleteAtEnd(Node*& head)
{
    if (head == nullptr) return;
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->prev->next = nullptr;
    delete temp;
}

void deleteAtPosition(Node*& head, int pos)
{
    if (head == nullptr) return;
    if (pos == 0)
    {
        deleteAtBeginning(head);
        return;
    }

    Node* temp = head;
    int index = 0;
    while (temp != nullptr && index < pos)
    {
        temp = temp->next;
        index++;
    }

    if (temp == nullptr) return;

    if (temp->next != nullptr)
        temp->next->prev = temp->prev;
    if (temp->prev != nullptr)
        temp->prev->next = temp->next;

    delete temp;
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
        cout << "2. Them vao dau\n";
        cout << "3. Them vao cuoi\n";
        cout << "4. Them vao vi tri bat ky\n";
        cout << "5. Xoa dau\n";
        cout << "6. Xoa cuoi\n";
        cout << "7. Xoa vi tri bat ky\n";
        cout << "8. In danh sach tu dau -> cuoi\n";
        cout << "9. In danh sach tu cuoi -> dau\n";
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
            insertAtBeginning(head, value);
            break;
        case 3:
            cout << "Nhap gia tri: ";
            cin >> value;
            insertAtEnd(head, value);
            break;
        case 4:
            cout << "Nhap gia tri: ";
            cin >> value;
            cout << "Nhap vi tri: ";
            cin >> pos;
            insertAtPosition(head, value, pos);
            break;
        case 5:
            deleteAtBeginning(head);
            break;
        case 6:
            deleteAtEnd(head);
            break;
        case 7:
            cout << "Nhap vi tri: ";
            cin >> pos;
            deleteAtPosition(head, pos);
            break;
        case 8:
            printForward(head);
            break;
        case 9:
            printBackward(head);
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
