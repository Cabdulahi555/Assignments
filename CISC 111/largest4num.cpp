/*************************************************
Cabdulahi Hussein
CS111
Lab largest4num.cpp
02/19/2025

This program will determine the largest number
********************************************/

#include <iostream>
using namespace std;
int main()
{
  int N1; //will hold the first input
  int N2; //will hold the second input
  int N3; //will hold the third input
  int N4; // will hole the fourth input
  int Largest; // largest number

  // get user input

  cout << "Please enter the first number: ";
  cin >> N1;
  cout <<"Please enter the second number: ";
  cin >> N2;
  cout << "Please enter the third number: ";
  cin >> N3;
  cout <<"Please enter the fourth number: ";
  cin>> N4;
  cout << endl;

  //compare integers

  if ( N1>N2 )
    Largest = N1;
  else Largest = N2;
  if ( N3>Largest )
    Largest = N3;
  if ( N4>Largest )
    Largest = N4;

  // time to output the largest


  cout <<"The largest value is: "<< Largest << endl;
  cout << endl;

  return 0;


}
