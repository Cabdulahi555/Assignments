// CS211 Binary Tree file 
// INSTRUCTION: use ** to build a regular binary tree

// Your name: Cabdulahi Hussein
 // -------------------------------------------------- */

// ** include necessary files
#include <iostream>
using namespace std;
// ** Declare tnode here
struct tnode
{
  int Elem;
  tnode *Rchild;
  tnode *Lchild;
};
tnode* createNode(int v)
{
  // ** create a new node with v as the value
  tnode *X;
  X = new tnode;
  X -> Elem = v;
  
  // Make sure left and right are NULL;
  X->Rchild = NULL;
  X->Lchild = NULL;

  // return the pointer to the node
  return X;  

} 
  
int main()
{ int x;
  tnode* root = NULL;
  tnode* P;  // to go down the tree
  tnode* N;  // for the new node that is created by createNode

  // ** create the root first.
  cout << "Enter a number: ";
  cin >> x;
  root = createNode(x);

  P = root; /// Sets the P pointer to the Root

  cout << "Enter a number: "; /// Asks the user for the number
  cin >> x;
  P -> Lchild = createNode(x); /// P child will create a new node
  cout << "Added as left child of " << P->Elem << endl; /// References the parent node

  P = root; 
  // ** Each time, createNode with user input and add it to the tree.
  while(P->Lchild != NULL)
    {
      //  first 2 will be added as the left most leaf
      P = P->Lchild;
    }
  
  /// This process is used multiple times essentially used by both the left side and right side of the tree
  cout << "Enter a number: ";
  cin >> x;
  P -> Lchild = createNode(x);
  cout << "Added as left child of " << P->Elem << endl;

  P = root;
  cout << "Enter a number: ";
  cin >> x;
  P -> Rchild = createNode(x);
  cout << "Added as right child of " << P->Elem << endl;
  
  P = root;
  while(P->Rchild != NULL)
    {
      //  last 2 will be the right most leaf
      P = P->Rchild;
    }
  
  cout << "Enter a number: ";
  cin >> x;
  P -> Rchild = createNode(x);
  cout << "Added as right child of " << P->Elem << endl;
  
  // ** Each time it is added say "Added as the left/right child of ___"
  
  
  // Make sure P starts at the root each time before going down the tree
  // using a while loop.
  
}// end of main

