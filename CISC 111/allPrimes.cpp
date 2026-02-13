/***************************************************************************
Cabdulahi Hussein
Prof. Slott
lab allPrimes.cpp
This program will prims all primes from 2 to 1000
*****************************************************************************/
#include <iostream>
#include "myMath.h"
#include <iomanip>
using namespace std;
int main()
{
  int num = 0;
  bool check;
  
  for(int n = 2; n < 1000; n++)
 {
    check = isPrime(n);
     if(check == true)
      {
	num++;
	cout <<setw(4)<< n;
      
	if (num%10 == 0)
	   cout << endl;
	   
	}
	  

 

 }

  cout <<endl;
  return 0;
}	



