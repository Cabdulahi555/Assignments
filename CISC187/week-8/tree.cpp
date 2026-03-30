
// Cabdulahi Hussein
// Prof. Danish Khan
// Binary Search Trees
 
#include <iostream>
using namespace std;
 
// Node structure
struct tnode
{
    int Elem;
    tnode *Rchild;
    tnode *Lchild;
};
 
// creates a new node with value v
tnode* createNode(int v)
{
    tnode *X;
    X = new tnode;
    X->Elem = v;
    X->Rchild = NULL;
    X->Lchild = NULL;
    return X;
}
 
// Inserts a value using tnode structure
void insert(tnode* &root, int v)
{
    tnode* N = createNode(v);  // new node to be inserted
    tnode* P = root;           // P to go down the tree
 
    // If tree is empty, new node becomes root
    if (root == NULL)
    {
        root = N;
        cout << "Inserted " << v << " as root" << endl;
        return;
    }
 
    // trek down the tree to find the correct spot
    while (P != NULL)
    {
        if (v < P->Elem)  // go left
        {
            if (P->Lchild == NULL)
            {
                P->Lchild = N;
                cout << "Added " << v << " as left child of: " << P->Elem << endl;
                return;
            }
            P = P->Lchild;
        }
        else  // go right
        {
            if (P->Rchild == NULL)
            {
                P->Rchild = N;
                cout << "Added " << v << " as right child of: " << P->Elem << endl;
                return;
            }
            P = P->Rchild;
        }
    }
}
 


 
int main()
{
    tnode* root = NULL;
 
    // Numbers you provided
    int values[] = {1, 5, 9, 2, 4, 10, 6, 3, 8};
    int size = sizeof(values) / sizeof(values[0]);
 
    cout << "\n=== Inserting values into tree ===" << endl;
    for (int i = 0; i < size; i++)
    {
        insert(root, values[i]);
    }
 
  
 
    return 0;
}