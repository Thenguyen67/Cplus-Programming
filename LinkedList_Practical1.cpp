#include<iostream>
using namespace std ;

struct Node
{
    int Value ;
    Node* Next ;
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

void In(Node *h)
{
    while(h != nullptr)
    {
        cout << h->Value << " " ;
        h = h->Next ;
    }
}

int main()
{
    int n , x ;
    cin >> n ;
    cin >> x ;
    Node* h = CreateNode(x) ;
    Node *p = h ;
    
    for(int i = 1 ; i < n ; i++)
    {
        cin >> x ;
        p = AddNode(p , x) ;
    }
    In(h) ;
}