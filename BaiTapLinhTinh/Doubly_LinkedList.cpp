#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* CreateNode(int value) {
    Node* temp = new Node;
    temp->data = value;
    temp->prev = nullptr;
    temp->next = nullptr;
    return temp;
}

void AddNode(Node*& head, int value) {
    Node* newNode = CreateNode(value);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void PrintList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void FreeList(Node*& head) {
    Node* temp = head;
    while (temp != nullptr) {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
    head = nullptr;
}

int main() {
    Node* head = nullptr;
    int choice, value;
    do {
        cout << "1. Nhap phan tu" << endl;
        cout << "2. In danh sach" << endl;
        cout << "3. Thoat" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Nhap gia tri: ";
                cin >> value;
                AddNode(head, value);
                break;
            case 2:
                PrintList(head);
                break;
            case 3:
                FreeList(head);
                cout << "Da giai phong bo nho. Ket thuc." << endl;
                break;
            default:
                cout << "Lua chon khong hop le" << endl;
        }
    } while (choice != 3);
}
