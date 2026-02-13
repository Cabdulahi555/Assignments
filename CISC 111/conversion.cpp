/******************************************************************************
Cabdulahi Hussein
02/07/2025
cs111 lab conversion.cpp

This program will ask for length in cm and convert it to inches in decimal and nearest integer.
****************************************************************************/
#include <iostream>
using namespace std;

int main()
{
  
 cout << "*************************************************************" << endl;
cout << "This program will convert a length in centimeters to yards, feet, and inches" << endl;
cout << "*************************************************************" << endl << endl;
 double inch; // For inches converted
 int cm; // for whole cm inputs
 int IInch; // Converted and rounded to nearest integer
 int yard; // For yard added 2/10
 int feet; // for feet added 2/10
 int R_Inch; // for remaining  inches added 2/10
 const double CM_Inch = 2.54 ; // for the conversion rate
 cout << "Please enter a length in centimeters";
 cin >> cm;

 // calculate the conversion from cm to inch for the decimal
 inch = cm / CM_Inch;

 // conversion to inches nearest integer
 IInch = (int)(inch + 0.5); // area in double is converted to the nearest integer
 // conversion from our inches rounded to yard feet and inch

 // Calculations added 02/10/2025
 
 yard = IInch / 36; // Find yard by dividing final inches by 36.
 R_Inch = IInch % 36; // Find the remaining inches.
 feet = R_Inch / 12; // Find the feet by dividing by remining inches.
 R_Inch = R_Inch % 12; // We declare the remining inches by dividing by 12.
 
 cout << cm << " centimeters is about " << inch << " inches rounded to " << IInch <<" Inches. "<< endl;
 cout << IInch << " Inches = " << yard << " Yards, " << feet << " Feet, and  " << R_Inch << " Inches. " << endl << endl;
 
 cout << " Thank you for using the program. Good Bye. " << endl;
 cout << " " << endl;

  return 0;
}
