#include<iostream>
using namespace std ;

struct Node
{
    int data ;
    Node *next ;
};

int main()
{
    Node *n ;
    Node *t ;
    Node *h ;

    n = new Node ;
    n->data = 10 ;

    t = n ;
    h = n ;
    
}