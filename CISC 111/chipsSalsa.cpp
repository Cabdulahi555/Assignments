/**************************************************************************************************************
Cabdulahi Hussein
Prof.Slott
homework chipssalsa
********************************************************************************************************************/

#include <iostream>
#include <iomanip>
#include "input.h"
using namespace std;
void fillJarsSoldArray(int jars[],string salsaTypes[], int size);
void printSales(int jars[],  string salsaTypes[], int size);
int getTotal( int jars[], int size);
void getHighestLowestSelling(int jars[], int size, int& highest, int& lowest);

int main()

{
  const int SIZE = 5; // const at top

    int sum = 0;

    // jar names 
    string salsaTypes[SIZE] = {"mild", "medium", "sweet", "hot", "zesty"};
    int jarsSold[SIZE];

    // calling the functions
    fillJarsSoldArray(jarsSold, salsaTypes, SIZE);

    printSales(jarsSold, salsaTypes, SIZE);
    // call function to get total/sum
    sum = getTotal(jarsSold, SIZE);

    cout <<"The total number of jars sold is "<<sum<< "\n";

    int highestIndex, lowestIndex;
    getHighestLowestSelling(jarsSold, SIZE, highestIndex, lowestIndex);
    cout << "The highest selling type is " << left << setw(7) << salsaTypes[highestIndex] << endl;
    cout << "The lowest selling type is " << left << setw(7) << salsaTypes[lowestIndex] << endl;


    cout <<endl;
   
   
    
    
     return 0;
}

// getting information and filling respective orders
void fillJarsSoldArray(int jars[],string salsaTypes[], int size)
{
 

    for (int i = 0; i < size; i++)
      {
        int input;
        cout << "Enter the number of jars sold for " << salsaTypes[i] << ": ";
        input = getInt(0, 1000000,"Invalid. Enter a number between 0 and 1000000: " );
        jars[i] = input;

	cout <<endl; // for correct formatting
     
      }

    
}

// printing sales
void printSales(int jars[],  string salsaTypes[], int size)
{
  cout << endl;
  for (int i = 0; i < size; i++) 
    {
        cout << left << setw(7) << salsaTypes[i]; 
	cout << left << setw(8) << jars[i] << endl;
    }
    cout << endl;
}


// grab sum for total jars sold
int getTotal( int jars[], int size)
{
  int total = 0;
  
  for(int i = 0; i < size; i++)
    {
      total += jars[i];

    }
  return total;
}

// grabbing for highest and lowest 
void getHighestLowestSelling(int jars[], int size, int& highest, int& lowest)
{
  // sending back lowest and highest
    highest = 0;
    lowest = 0;

    for (int i = 1; i < size; i++)
      {
        if (jars[i] > jars[highest])
	  {
            highest = i; // if statements for declaring lowest and highest
        }
        if (jars[i] < jars[lowest]) {
            lowest = i;
        }
    }
}
