#include <iostream>
using namespace std;

struct Node
{
    int Value;
    Node* Next;
    Node(int value)
    {
        Value = value;
        Next = NULL;
    }
};

void InsertAtTail(Node*& head, int value)
{
    Node* newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}

void PrintList(Node* head)
{
    while (head != NULL)
    {
        cout << head->Value << " ";
        head = head->Next;
    }
    cout << endl;
}

void FreeList(Node*& head)
{
    while (head != NULL)
    {
        Node* temp = head;
        head = head->Next;
        delete temp;
    }
}

int main()
{
    Node* head = NULL;
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Nhap gia tri phan tu thu " << i + 1 << ": ";
        cin >> x;
        InsertAtTail(head, x);
    }

    cout << "Danh sach lien ket: ";
    PrintList(head);

    FreeList(head);
}
