#include<iostream>
using namespace std ;

struct Node
{
    int Value ;
    Node *Next ;
};

Node *CreateNode(int x)
{
    Node *temp = new Node() ;
    temp->Value = x ;
    temp->Next = nullptr ;
    return temp ;
}

Node *AddNode(Node *p , int x)
{
    Node *temp = CreateNode(x) ;
    p->Next = temp ;
    return temp ;
}

void Print(Node *head)
{
    while(head != nullptr)
    {
        cout << head->Value << " " ;
        head = head->Next ;
    }
}

int main()
{
    int n , x ;
    cin >> n ;
    cin >> x ;

    Node *head = CreateNode(x) ;
    Node *p = head ;

    for(int i = 1 ; i < n ; i++)
    {
        cin >> x ;
        p = AddNode(p , x) ;
    }
    Print(head) ;
}