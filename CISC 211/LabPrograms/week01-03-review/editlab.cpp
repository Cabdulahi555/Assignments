// CS211 Edit Practice Lab - Yoshii

// INSTRUCTION:
//  Must demonstrate the ability to edit this file quickly in emacs
//  Must be able to use ^a, ^e, ^d, ^s, ^r, replace-str and jump to end of file
//  and ^k multiple lines and ^y to paste them.
//  For example, change all %% to // using replace-str; find all couts using ^s

// Your name: Cabdulahi Hussein
//----------------------------------------------

// gets data from the user to fill S until -1 is entered


int get(int S[], int size)
{  int sc, i;
   for (i = 0; i < size ; i++)
     {
      cout<< "Enter a score or -1: ";
      cin >> sc;
      if (sc > -1)
	{
	S[i] = sc;
			  }

     }
    return i; // how many scores

}
 


// displays all scores
void display(int S[], int size)
{  for (int i = 0; i < size ; i++)
    {
      cout << S[i] << endl;;
    }
}

// searches through S looking for perfect and returns how many
int search(int S[], int size, int perfect)
{ int c = 0;
  for (int i = 0 ; i < size ; i++)
    {
      if (S[i] == perfect) c++;
    }
  return c;
}

// finds the total
int total(int S[], int size)
{ int sum = 0;
  for (int i = 0 ; i < size ; i++)
    {
      sum = sum + S[i];
    }
  return sum;
}

