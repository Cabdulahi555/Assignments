/****************************************************************************
Cabdulahi Hussein
cs-111
Homework triagle.cpp
03/29/2025
This program will ask for 3 points and tell what kind of triangle it is
**************************************************************************/
#include <iostream>
#include <cmath> //this header file contains sqrt(), fabs(), pow(), which you will need to call from triangle.cpp
using namespace std;
//parameters

void showProgramInfo();
void GetPoints(int &x, int &y, int point);
double findDistance(int x1, int y1, int x2, int y2);
void findTriangle(double d1, double d2, double d3);

int main()
{
  showProgramInfo();

  int x1, y1, x2, y2, x3, y3;
 GetPoints(x1, y1, 1);
 GetPoints(x2, y2, 2);
 GetPoints(x3, y3, 3);

  double d1 = findDistance(x1, y1, x2, y2);
  double d2 = findDistance(x2, y2, x3, y3);
  double d3 = findDistance(x3, y3, x1, y1);

  findTriangle(d1, d2, d3);

  return 0;

}
// this function will display the header
void showProgramInfo()

{
  cout << endl;
  cout <<"***************************************************************\n";
  cout <<"This program will ask you to enter 3 points of a triangle and\n";
  cout <<"tell what kind of triangle it is. Please hit ENTER to continue.\n";
  cout <<"***************************************************************\n";
  cin.ignore();
  
}

// this function will enter coordinates submitted by us users
void GetPoints(int &x, int &y, int point)
{
  cout <<"Point "<< point << "\n";
  cout <<"\tEnter the x-cordinate: ";
  cin >> x;
  cout <<"\tEnter the y-cordinate: ";
  cin >> y;

  cout << endl;
}


// this function will calculate the distances
double findDistance(int x1, int y1, int x2, int y2)
{
  return sqrt(pow(x2-x1,2) + pow(y2-y1, 2));
  
}

// function will determine triangle shiape
    void findTriangle(double d1, double d2, double d3)
{

  if(fabs(d1-d2) <0.00001 && fabs (d2 - d3) < 0.00001)

    {
      cout <<"This triangle is equilateral" << endl<< endl;
    }


    else if( fabs(d1-d2) < 0.00001 || fabs(d2-d3) < 0.00001 || fabs(d1-d3) < 0.00001)

      {
	cout <<"This triangle is isosceles" << endl << endl;
      }

    else

      {
	cout <<"This triangle is scalene" << endl << endl;
      }

}

