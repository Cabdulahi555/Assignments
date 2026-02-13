/*********************************************************
Cabdulahi Hussein
Professor Slott
Lab military.cpp
02/24/2025

This program will ask the user to enter a gender and age and display messages depending on input whether or not they\
 are e;igible for military service.
********************************************************/
#include <iostream>
using namespace std;
int main()

{ // declare the inputs
  char gender;
  int age;

  // ask for gender
  cout <<"Please enter a gender (M/F):  ";
  cin >> gender;

if( gender == 'M' || gender == 'm')
{

  // ask for age only if user is male
 { cout <<"Please enter age ";
 cin >> age;}

 // block off the invalid ages
   if ( age< 0 || age > 130){
  cout <<"Invalid age. \n";
   return 0;}

   // grab the necessary ages
   else  if (age > 16 && age < 43){
  cout <<"The military is hiring more people like you. \n";}
   
   // for under age participants
   else if (age <= 16){
  cout <<"You need to wait " << 17 - age << " more years. \n";}
 
  else {
    cout <<"Thank you for using the system. \n";}
						
}


// for the female inputs

 else if (gender == 'F' || gender == 'f')
 cout <<"Thank you for using the system, but we are only looking \
for men. \n";

// if any of those gender inputs arent m or f
 
 else

cout <<"Invalid gender. \n";








  return 0;
}
