#include<iostream>
using namespace std ;

struct Node
{
    int Value ;
    Node* Next ;
};

void PrintList(Node* head)
{
    while(head != NULL)
    {
        cout << head->Value << endl ;
        head = head->Next ;
    }
}

int main()
{
    Node* head = new Node() ;
    Node* second = new Node() ;
    Node* third = new Node() ;

    head->Value = 1 ;
    head->Next = second ;

    second->Value = 2 ;
    second->Next = third ;

    third->Value = 3 ;
    third->Next = NULL ;

    PrintList(head) ;

    delete head;
    delete second;
    delete third;

}