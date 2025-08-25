Node* FindMin(Node* Root) 
{
    while(Root && Root->Left != nullptr) 
    {
        Root = Root->Left ;
    }
    return Root ;
}

Node* DeleteTree(Node* Root , int Value)
{
    if(Root == nullptr) return Root ;
    if(Value < Root->Data) Root->Left = DeleteTree(Root->Left , Value) ;
    else if(Value > Root->Data) Root->Right = DeleteTree(Root->Right , Value) ;
    else
    {
        if(Root->Left == nullptr)
        {
            Node* Temp = Root->Right ;
            delete Root ;
            return Temp ;
        }
        if(Root->Right == nullptr)
        {
            Node* Temp = Root->Left ;
            delete Root ;
            return Temp ;
        }
    Node* Temp = FindMin(Root->Right) ;
    Root->Data = Temp->Data ;
    Root->Right = DeleteTree(Root->Right , Temp->Data) ;
    }
    return Root ;
}