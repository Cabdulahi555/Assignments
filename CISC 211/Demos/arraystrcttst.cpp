// CS211 Yoshii - Array of Structs demonstration

#include<iostream>
#include<string>
using namespace std;

struct student
{
  string name;
  int age;
};


int main()
{
  student StuList[5]; // up tp 5 students
  int numStu; // how many students
  int i = 0;  // index into StuList 
  int a;      // for age entered by the user
  string n;   // for name entered by the user

  cout << "Enter the age of student " << i << " or -1 to stop" << endl;   
  cin >> a;
  cin.ignore();  // needed because I use getline below

    while ((a != -1) && (i < 5))
    {
      StuList[i].age = a;
      cout << "Enter the name of student " << i << endl;   
      getline(cin, n);
      StuList[i].name = n;
      i++;  // next student

      cout << "Enter the age of student " << i << " or -1 to stop" << endl;   
      cin >> a;
      cin.ignore();
    }

  numStu = i;  // the last slot filled is i-1
  cout << numStu << " students accepted. " << endl;
  // display stored results
  for (int i = 0; i < numStu; i++)
    {
      cout << StuList[i].name << " is " << StuList[i].age << endl;
    }//end of for

}//end of main
