// CS211 Yoshii - File Input demonstration with user provided file name (use data.txt)

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
  string name;  // data read
  int age;      // data read
  string fname;  // file name

  cout << "Enter a file name: ";
  cin >> fname;

  ifstream fin (fname.c_str()); // declare fin and open at the same time


  while (fin >> name)  // while I can read the name
    {
      cout << "got " << name << endl;
      fin >> age;
      cout << "got " << age << endl;
    }// end of while

  fin.close();
  fin.open(fname.c_str()); // reopen
  
  while (fin >> name)  // while I can read the name
    {
      cout << "got " << name << endl;
      fin >> age;
      cout << "got " << age << endl;
    }// end of while

  fin.close();

}// end of main
