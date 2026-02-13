/*************************************************************************************************
Cabdulahi Hussein
Prof. Slott
Lab militaryFunc.cpp
This program will verify the eligibility of joining the military from the 
user’s gender and age. Make the following 4 functions in addition to the main.
*********************************************************************************************/
#include <iostream>
using namespace std;

// prototypes
void showProgInfo ();
void getInfo(string& name, char& gen, int& age);
bool verifyEligibility( char gen, int age);
void printLetter( bool pass, string name);
int main()
  
{

  string name;
  char gen;
  int age;
  bool pass;
  showProgInfo ();
  getInfo(name, gen ,age);
  pass = verifyEligibility( gen, age);
  printLetter( pass, name);


  return 0;
}

void showProgInfo ()
{

  cout <<"**************************************************** " <<endl;
  cout <<"This program will tell you if you are eligible to join the military." <<endl;;
  cout <<"****************************************************" <<endl;
}

void getInfo(string& name, char& gen, int& age)
{

  cout <<"Enter first name: "<<endl;
  cin >> name;
  
  cout <<"Enter gender: "<<endl;
  cin >> gen;
  
  cout<< "Enter age." <<endl;
  cin >> age;

}

bool verifyEligibility( char gen, int age)
{
  bool pass;
  if (gen == 'f' || gen == 'F')
    {
      pass = false;
    }

  else
    {
      if (age < 18)
	{
	  pass = false;
	}
      else
	{
	  pass = true;
	}
    }
  return pass;
}

void printLetter( bool pass, string name)
{
  if( pass == true)
    {
      cout <<"Dear" << name << " Please consider joining the military" << endl;
    }
  else
    cout <<"Thank you for applying." << endl;

}
