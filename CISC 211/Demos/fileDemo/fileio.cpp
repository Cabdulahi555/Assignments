// CS211 Yoshii - File IO demonstration with user provided file name (use data.txt)
// The output goes to out.txt

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
  string name;   // data 
  int age;       // data
  string fname; // file name

  cout << "Enter a file name: ";
  cin >> fname;

  ifstream fin;
  fin.open(fname.c_str());

  while (fin >> name)  // while I can read the name
    {
      cout << "got " << name << endl;
      fin >> age;
      cout << "got " << age << endl;
    }// end of while

  fin.close();

  ofstream fout;
  fout.open("out.txt", ios::out);
  fout << "hello";
  fout.close();

  fout.open("out.txt", ios::app);
  fout << "there";
  fout.close();

}// end of main
