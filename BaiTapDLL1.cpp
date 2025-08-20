#include<iostream>
using namespace std ;

struct node
{
    int data ;
    node* next ;
    node* prev ;
    node(int value)
    {
        data = value ;
        next = nullptr ;
        prev = nullptr ;
    }
};

void FirstList(node* &head , int value)
{
    node* newnode = new node(value) ;
    if(head == nullptr)
    {
        head = newnode ;
        return ;
    }
    newnode->next = head ;
    head->prev = newnode ;
    head = newnode ;
}

void LastList(node* &head , int value) 
{
    node* newnode = new node(value) ;
    if(head == nullptr)
    {
        head = newnode ;
        return ;
    }
    node* copyhead = head ;
    while(copyhead->next != nullptr)
    {
        copyhead = copyhead->next ;
    }
    copyhead->next = newnode ;
    newnode->prev = copyhead ;
}

void PrintList(node* head)
{
    if(head == nullptr) return ;
    node* copyhead = head ;
    cout << "\n Danh sach phan tu tu dau den cuoi : " ;
    while(copyhead != nullptr)
    {
        cout << copyhead->data << " " ;
        copyhead = copyhead->next ;
    }
    cout << endl ;
}

void PrintListBack(node* head)
{
    if(head == nullptr) return ;
    node* copyhead = head ;
    cout << "\n Hien thi phan tu tu cuoi ve dau : " ;
    while(copyhead->next != nullptr)
    {
        copyhead = copyhead->next ;
    }

    while(copyhead != nullptr)
    {
        cout << copyhead->data << " " ;
        copyhead = copyhead->prev ;
    }
    cout << endl ;
}

void DeletePos(node* &head , int pos)
{
    if(head == nullptr) return ;

    if(pos == 0)
    {
        node* copyfirst = head ;
        head = head->next ;
        if(head != nullptr)
        {
            head->prev = nullptr ;
        }
        delete copyfirst ;
        return ;
    }

    node* copysecond = head ;
    int index = 0 ;
    while(copysecond->next != nullptr && index < pos)
    {
        copysecond = copysecond->next ;
        index++ ;
    }

    if(copysecond == nullptr) return ;

    if(copysecond->next != nullptr)
    {
        copysecond->next->prev = copysecond->prev ;
    }
    if(copysecond->prev != nullptr)
    {
        copysecond->prev->next = copysecond->next ;
    }
    delete copysecond ;
}

void FreeList(node* head)
{
    node* temp ;
    while(head != nullptr)
    {
        temp = head ;
        head = head->next ;
        delete temp ;
    }
}

int main()
{
    node* head = nullptr ;
    int choice , value , pos ;
    
    do 
    {
        cout << endl ;
        cout << "1. Them phan tu vao dau danh sach \n" ;
        cout << "2. Them phan tu vao cuoi danh sach \n" ;
        cout << "3. Hien thi phan tu tu dau den cuoi \n" ;
        cout << "4. Hien thi phan tu tu cuoi ve dau \n" ;
        cout << "5. Xoa phan tu tai vi tri bat ki \n" ;
        cout << "6. Thoat \n" ;
        cout << "Chon : " ;

        cin >> choice ;
        switch(choice)
        {
            case 1 : 
                cout << endl << "Nhap gia tri : " ;
                cin >> value ;
                FirstList(head , value) ;
                break ;

            case 2 :
                cout << endl << "Nhap gia tri : " ;
                cin >> value ;
                LastList(head , value) ;
                break ;

            case 3 :
                PrintList(head) ;
                break ;

            case 4 :
                PrintListBack(head) ;
                break ;

            case 5 :
                cout << "\n Nhap vi tri muon xoa phan tu : " ;
                cin >> pos ;
                DeletePos(head , pos) ;
                break ;

            case 6 :
                cout << endl << "Ket thuc danh sach " ;
                FreeList(head) ;
                break ;

            default : cout << "\n Loi nhap ! Vui long nhap lai " ;
        }
    }
    while(choice != 6) ;
}