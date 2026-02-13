#include <iostream>
using namespace std;

void selectionsortDesc(int a[], int s)
{
  for (int i = 0; i < s - 1; i++)
    {
    int maxdex = i;

  for(int j = i+1; j < s; j++)
    {
      if(a[i] > a[maxdex])
      {
	maxdex = j;
      }
      
    }
      if(maxdex != i)
	{
	  int temp = a[i];
	  a[i]= a[maxdex];
	  a[maxdex]=temp;
	}
    }
}

  const int SIZE = 5;

void selectionsortDesc(int a[], int s);

  int main()
  {

   

    int ages[SIZE];
    for( int i = 0; i < SIZE; i++)
      {
	cout <<"Please enter age: " << endl;
	cin >> ages[i];
	 
	
      }

    selectionsortDesc(ages, SIZE);

    for(int i = 0; i < SIZE; i++)
      {
	cout << ages[i] << " " << endl;
	}
		      


    return 0;
  }
