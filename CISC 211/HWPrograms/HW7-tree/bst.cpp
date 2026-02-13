// CS211 HW7 Binary Search Tree file 

// INSTRUCTION: create a binary search tree and traverse it

/* -------------------------------------------------
 Your name: **
 Client file to create a binary search tree
 Compiler: g++
 -------------------------------------------------- */

// ** include necessary files

// ** Declare tnode here

// displays elements in IN-ORDER (should come out sorted) using recursion
void traverse(tnode* V)
{
  if (V != NULL)
    {

    }
}// end of traverse

// create a new node with element C and return a pointer to it
tnode* createNode(int C)
{
  tnode *Z = new tnode;


  
}// end of CreateNode

// Build a binary search tree
int main()
{
  tnode* root = NULL; // no tree yet
  tnode* P;  // for going down the tree
  tnode* N;  // for the new node
  
  // This will keep on getting elements from the user and add
  // to the tree in the right place

  // ** First set up the root with a new node (use CreateNode) 


  // ** while the user wants to continue
  {
     // ** get an element and create a new node N with it
  
     // ** go down the tree to add N to the right place 
      P = root; // P starts at the root

      while (you have not added the node)
      {
      if P's Element is > N->Elem
          if P's left is NULL the new node should be added to P's left
           else
	     go down to the left

       else if P's Element is < N->Elem
          if P's right is NULL the new node should be added to P's right
           else
	     go down to the right
	       
   }// end of while to go down

  }// finished the tree

  cout << "In the sorted order..." << endl;
  traverse(root); 
  cout << endl;
  
}//end of main
