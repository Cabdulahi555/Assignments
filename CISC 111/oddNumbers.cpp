/********************************************************************************
Cabdulahi Hussein
Lab oddNumbers
02/28/2025
********************************************************************************/
#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{

  // setw format
  cout << setw(10)<< "Number" << setw(10) << "Double" << setw(10) << "Triple" << endl;

  // loop

  for (int i = 99 ; i >= 1 ; i-=2)
    {
      cout << setw(10) << i
	   << setw(10) << i * 2
	   << setw(10) << i * 3
	   << endl;
    }
  




  return 0;
}
