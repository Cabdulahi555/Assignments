#include <iostream>
using namespace std;

void showProgInfo (); // prototype
int getNum(); // protptype
int findLargest(int num1,int  num2, int num3);
void printResult(int num1, int num2, int num3, int lrg);
int main()
{ int a,b,c;
  int num1,num2,num3,lrg;
  showProgInfo (); 

  num1 = getNum();
  num2 = getNum();
  num3 = getNum();
  
  lrg =  findLargest(num1, num2, num3);

  printResult( num1,  num2,  num3, lrg);



  return 0;
}

void showProgInfo ()
{
    cout <<"******************************************************************" << endl;
    cout <<"This program will ask you to enter 3 numbers and find the largest." << endl;
    cout <<"******************************************************************" << endl;
}

int getNum()
{

  int num1;
  cout <<"Enter a positive number: ";
  cin >>num1;

  while (num1 <= 0)
    {
      cout <<num1 << " is invalid. Enter a positive number: ";
      cin >> num1;
    }
  return num1;
}

int findLargest(int num1,int  num2, int num3)
{
  int largest;
  
  if (num1 > num2)
    largest = num1;
  else
    largest = num2;
  if (num3 > largest)
    largest = num3;
  

  return largest;
}

void printResult(int num1, int num2, int num3, int lrg)
{

  cout <<"The largest number among " << num1 << ", " << num2 << ", and " << num3 << " is " << lrg << "." <<endl;
  
}
