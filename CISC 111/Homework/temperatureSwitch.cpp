/*************************************************************************
Cabdulahi Hussein
Prof. Slott
Homework 7 - temperatureSwitch.cpp
This program will ask users to enter a temperature in either F or C and convert the temperature to the other unit.
**************************************************************************/
#include <iostream>
using namespace std;
#include <iomanip> // for converted temp
int main()
{ //assign variables
  double Fahrenheit; // inputted fahrenheit
  double Celsius; // inputted celsius 
  char choice; // what the user chooses between F or C
  double c_f; // converted Fahrenheit
  double c_c; // converted Celcius
 
   //get variables from user
  
  cout <<"Which temperature do you have? Enter F for Fahrenheit or C for Celsius?: ";
    cin >> choice;

  // switch

  
  switch(choice)
    {
      // for Fahrenheit to Celsius
    case 'F':
    case 'f': // for both uppercase and lowercase
      
        cout <<"Enter a temperature in Fahrenheit: ";
        cin >> Fahrenheit;
      
         // calculate conversion
         c_c = (Fahrenheit - 32) * 5/9.0;

          // output
	 cout << Fahrenheit << " Fahrenheit = " << fixed << setprecision(2) << c_c << " Celsius" << endl<< endl; 
          break;

     // for Celsius to Fahrenheir	  
    case 'C':
    case 'c': // for both uppercase and lowercase

      cout <<"Enter a temperature in Celsius: ";
      cin >> Celsius;

      // calculate conversion
      c_f = (Celsius * 9/5) + 32;

      //output
      cout <<Celsius << " Celsius = " << fixed << setprecision(2) << c_f << " Fahrenheit " << endl << endl;
      break;

    default:
      cout <<"Invalid choice" << endl << endl;
      

    }
  



  return 0;
}
