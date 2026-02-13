#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

struct emp{
    string FN, LN, Gen;
    double HR;
    int empID, age;
};


int main()
{

  ifstream inFile;
  ofstream outFile;

  inFile.open("employees.dat");

  if(!inFile)
    {
      cout << "File doesnt exist buddy " << endl;
    }

  else{
    outFile.open("emp.dat");
    
    
    
  }


  return 0;


}
