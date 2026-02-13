/********************************************************
CS111 Lab on c-strings
Template prepared by Kazumi Slott
********************************************************/
#include <iostream>
using namespace std;

void myStrcat(char dest[], const char source[]);

int main()
{
  char str2[80] = "Dave ";
  myStrcat(str2, "Smith");
  cout << str2 << endl; //Dave Smith

  
  return 0;
}

void myStrcat(char dest[], const char source[])
{
  int d = 0;

  //Move d to the end of dest ('\0')
  while (dest[d] != '\0')
    {
      d++;
    }

  //copy each character from source to dest

  int s = 0;
  
  while (source[s]!= '\0')

    {
      
    dest [d] = source[s];
  
    d++;
    s++;
    
  }

  //place '\0' at the end of dest
    dest[d] = '\0';
    
    }
