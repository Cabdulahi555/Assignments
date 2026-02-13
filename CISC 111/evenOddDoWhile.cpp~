 /*********************************
Template written by Kazumi Slott
*********************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int num; //number
  double avg; // average
  int total = 0; // total nuumbers combined
  int count, C_Even, C_Odd;
  char YN; // yes or no
  //input the first number

  cout <<" Do you have a number to enter? y or n:  "<< endl;
  cin >> YN;

  
while(YN == 'Y' || YN == 'y') //break out when the user enters a zero
{

  cout <<"Enter a number: ";
  cin >> num;
  
//To calculate the average number after the while loop, you need to do some                                                                                             thing here
  
  count ++;
    total = num + total;

//check if the number is even or odd
    if(num%2 == 0)
      {
         C_Even++;
	 cout << num << " is even" << endl;
      }

    else
      {
	 C_Odd++;
	 cout << num << " is odd" << endl;
      }

//input the next number
 cout << "Do you have a number to check? y or n: ";
 cin >> YN;
 
 }

  //show the result
  if(total == 0) //The user didn't check number for even or odd. She entered a                                                                                              zero for the first input.
    cout << "\nNo numbers were checked" << endl;
  else //The user checked at least one number for even or odd. Then go ahead sho                                                                                             w the total numbers of even and odd and average number.
{
      avg = total * 1.0 / count;
      cout << C_Even << " even numbers" << endl;
      cout << C_Odd << " odd numbers" << endl;
      cout << "The average is " << fixed << setprecision(2) << avg << endl;
}
  return 0;
}
