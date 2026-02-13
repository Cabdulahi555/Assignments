/**********************************************************************************************************************************************************
Cabdulahi Hussein
CS111
Homework 4 - clock.cpp
02/12/2025

This program will ask a user for a time in 2 integers; hours and minutes. It will tell them the angles of the hour and minute hands on the clock.
***********************************************************************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{ int H; // for hour submitted  by user
  int M; // for minute submitted by user
  double A_H; // Angle of Hour hand
  int A_M; // Angle of min hand

  // get input from user

  
  cout << "Enter hours: "; // first input
  cin >> H;
  cout << "Enter minutes: "; // second input
  cin >> M;
  
  // time to calculaate
  A_M = M * 6; // can just multiply by 6 degrees to get answer
  A_H = (H % 12) * 30 + ( M * 0.5); // clock split into 12 hours and hand moves .5 degree every minute
 

  // output answers needed for auto grader
  cout <<"The angle of the hour hand is: " << A_H<< endl;
  cout << "The angle of the minute hand is: " << A_M <<endl<< endl;
  
  
  return 0;
}
