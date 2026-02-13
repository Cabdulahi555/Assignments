/*******************************************************************************
Cabdulahi Hussein
CS111 
02/28/2025
Lab sumFrom1.cpp
This program will ask the user for a positive integer value and use loop to get the sum
*************************************************************************************/
#include <iostream>
using namespace std;

int main()
{
  // declare integer
  int num;
  int total = 0;
  

  // ask for input
  cout <<"Please enter a positive integer: ";
  cin >> num;

  
  if (num > 0)
{
  for(int i= 0; i <= num; i++)
    total += i;
  cout <<"The sum of all the numbers from 1 to " << num << " is " << total<<endl;
   


}
  else cout<< num << "Is invalid. ";
  return 0;
}
