#include <iostream>

using namespace std;

class Node{
public:
    int Data;
    Node *Left, *Right;
};

class Tree{
    Node *root;
    void Display(Node *pDisplay){
        if(pDisplay == NULL){
            return;
        }
        Display(pDisplay->Left);
        cout<< pDisplay->Data <<endl;
        Display(pDisplay->Right);
    }
public:
    Tree(){
        root = NULL;
    }

    static Node* Create(int data){
        Node *newNode = new Node();
        newNode->Data = data;
        newNode->Left = newNode->Right = NULL;
    }

    void Add(Node *newNode){
        if(root == NULL){
            root = newNode;
        }
        else{
            Node *pCurrent = root;
            Node *parent;
            while(pCurrent != NULL){
                parent = pCurrent;
                if(newNode->Data > pCurrent->Data){
                    pCurrent = pCurrent->Right;
                }
                else{
                    pCurrent = pCurrent->Left;
                }
            }

            if(newNode->Data > parent->Data){
                parent->Right = newNode;
            }
            else{
                 parent->Left = newNode;
            }
        }
    }

    Node* Search(int data){
        Node *pSearch= root;
        while(pSearch != NULL){
            if(data == pSearch->Data){
                  return pSearch;
            }
            if(data > pSearch->Data){
                pSearch= pSearch->Right;
            }
            else{
                 pSearch= pSearch->Left;
            }
        }
        return NULL;
    }

    Node *GetParent(Node *child){
        Node *parent= root;
        while(parent != NULL){
            if(parent->Left == child || parent->Right == child){
                 return parent;
            }
            if(child->Data > parent->Data){
                 parent= parent->Right;
            }
            else{
               parent= parent->Left;
            }
        }
        return NULL;
    }

    void Delete(Node *pDelete){
        Node *temp;
        if(pDelete == root){
            if(pDelete->Left == NULL && pDelete->Right == NULL){
               root= NULL;
            }
            else if(pDelete->Right == NULL){
                root= root->Left;
            }
            else if(pDelete->Left == NULL){
                 root= root->Right;
            }
            else{
                temp= root->Left;
                while(temp->Right != NULL){
                     temp = temp->Right;
                }
                temp->Right = root->Right;
                root = root->Left;
            }
        }
        else{
            Node *parent= GetParent(pDelete);
            Node *target;
            if(pDelete->Left == NULL && pDelete->Right == NULL){
                target= NULL;
            }
            else if(pDelete->Right == NULL){
                target= pDelete->Left;
            }
            else if(pDelete->Left == NULL){
                target= pDelete->Right;
            }
            else{
                temp= pDelete->Left;
                while(temp->Right != NULL){
                     temp= temp->Right;
                }
                temp->Right= pDelete->Right;

                target= pDelete->Left;
            }
            if(parent->Left == pDelete){
                 parent->Left = target;
            }
            else{
               parent->Right = target;
            }
        }
        pDelete->Left = pDelete->Right = NULL;
    }

    void Traverse(){
        Display(root);
    }
};

int main(){
    Tree tree;
    tree.Add(Tree::Create(50));
    tree.Add(Tree::Create(40));
    tree.Add(Tree::Create(45));
    tree.Add(Tree::Create(30));
    tree.Add(Tree::Create(25));
    tree.Add(Tree::Create(60));
    tree.Add(Tree::Create(80));
    tree.Add(Tree::Create(55));

    tree.Traverse();
    return 0;
}
