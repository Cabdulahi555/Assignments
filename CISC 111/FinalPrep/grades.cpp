#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
  ifstream inFile;
  ofstream outFile;

  // open the file

  inFile.open("grades.dat");

  // if file doest exist

  if(!inFile)
    {
      cout<< "FIle doesnt exist" << endl;
    }

  else // the file exists
    {
      outFile.open ( "result.dat");
	
	string name;
	int g1, g2, g3;
	int studentCount = 0;
	double classavg = 0.0;
	double totalAvgSum = 0.0;
	outFile << fixed << setprecision(2);

      
      outFile << left << setw(15) << "Names"<< setw(15)<< "Score 1 "<< setw(15) << "Score 2 " << setw(15) << "Score 3 " << setw(15)<< "Average" <<endl;
      outFile << "-----------------------------------------------------------------------" << endl;
      
      while (inFile >> name >> g1 >> g2 >> g3)
	{
	  double classavg = (g1 + g2 + g3) / 3.0;
	  totalAvgSum += classavg;
	  studentCount++;

	 
	  
	  outFile << left << setw(15) << name << setw(15) << g1 << setw(15) << g2 << setw(15) << g3 <<  setw(15)<< classavg << endl;
	 

	}

      totalAvgSum = (totalAvgSum * 1.0) / studentCount;

      outFile << endl;
      outFile << "Amount of Sudents: " << studentCount<<endl;
      outFile <<"Grade Average: " << totalAvgSum<<endl;
      
      inFile.close();
      outFile.close();

    }
}
