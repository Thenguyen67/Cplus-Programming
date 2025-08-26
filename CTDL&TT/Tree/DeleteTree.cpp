#include<iostream>
using namespace std ;

// Truyen vao 5 3 7 2 4 6 9
    //     5
    //    / \
    //   3   7
    //  / \  / \
    // 2  4 6  9


struct node
{
    int data ;
    node* left ;
    node* right ;
    node(int value)
    {
        data = value ;
        left = right = nullptr ;
    }
};

node* insert(node* root , int value)
{
    if(root == nullptr) return new node(value) ;
    if(value < root->data) root->left = insert(root->left , value) ;
    if(value > root->data) root->right = insert(root->right , value) ;
    return root ;
}

void PrintTree(node* root)
{
    if(root != nullptr)
    {
        PrintTree(root->left) ;
        cout << root->data << " " ;
        PrintTree(root->right) ;
    }
}

bool FindTree(node* root , int value)
{
    if(root == nullptr) return false ;
    if(value == root->data) return true ;
    if(value < root->data) return FindTree(root->left , value) ;
    return FindTree(root->right , value) ;
}

node* findmin(node* root)
{
    while(root && root->left != nullptr)
    {
        root = root->left ;
    }
    return root ;
}

node* deleteTree(node* root , int value)
{
    if(root == nullptr) return root ;
    if(value < root->data) root->left = deleteTree(root->left , value) ;
    else if(value > root->data) root->right = deleteTree(root->right , value) ;
    else
    {
        if(root->left == nullptr) 
        {
            node* temp = root->right ;
            delete root ;
            return temp ;
        }
        else if(root->right == nullptr)
        {
            node* temp = root->left ;
            delete root ;
            return temp ;
        }
        node* temp = findmin(root->right) ;
        root->data = temp->data ;
        root->right = deleteTree(root->right , temp->data) ;
    }
    return root ;
}

int main()
{
    node* root = nullptr ;
    int choice , value ;

    do 
    { 
        cout << "1. Nhap phan tu" << endl ;
        cout << "2. In danh sach" << endl ;
        cout << "3. Tim phan tu trong cay" << endl ;
        cout << "4. Xoa phan tu" << endl ;
        cout << "0. Ket thuc danh sach" << endl ;
        cout << "Chon : " ;

        cin >> choice ;
        switch(choice)
        {
            case 1 :
            {
                cout << endl << "Nhap gia tri : " ;
                cin >> value ;
                root = insert(root , value) ;
                break ;
            }

            case 2 :
            {
                cout << "Danh sach phan tu : " ;
                PrintTree(root) ;
                cout << endl ;
                break ;
            }

            case 3 :
            {
                cout << "\nNhap vao gia tri can tim : " ;
                cin >> value ; 
                if(FindTree(root , value)) cout << "Tim thay " << value << " trong cay " << endl << endl ;
                else cout << "Khong tim thay phan tu trong cay" << endl << endl ;
                break ;
            }

            case 4 : 
            {
                cout << "\nNhap vao phan tu muon xoa : " ;
                cin >> value ;
                if(FindTree(root , value))
                {
                    root = deleteTree(root , value) ;
                    cout << "Da xoa " << value << " khoi cay." << endl ;
                } 
                else 
                {
                    cout << "Khong tim thay " << value << " de xoa." << endl ;
                }
                break ;
            }

            case 0 : 
            {
                cout << "Ket thuc danh sach" ;
                break ;
            }

            default : cout << "Nhap sai ! Vui long nhap lai" << endl ;
        }
    }
    while(choice != 0) ;
}