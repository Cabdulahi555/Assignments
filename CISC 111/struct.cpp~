/***************************************************************************
Cabdulahi Hussein 
Prof. Slott
lab struct.cpp - All parts
***********************************************************************/

#include <iostream>
#include <fstream>  // needed for file operations
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

// create our employee structure

struct emp{

  string FN;// first name
  string LN;// last name
  char gen;// gender
  double hRate; // hourly rate
  int ID;// employee id
  int age;// age

  
};

// parameters for fucntions

void readData(emp mAr[], emp fAr[], int& maleCount, int& femaleCount, const int SIZE);
void printEmployee(const emp& e);
void printAllEmp(const emp arr[], int count);
void outfileArray(const emp ar[], int count);
emp findOldest(const emp m[], const emp f[], int maleCount, int femaleCount);
void giveRaise(double percent, emp e[], int count);
void giveRaiseToOneEmployee(double percent, emp& e);
void combineArray(const emp m[], int maleCount, const emp f[], int femaleCount, emp all[]);
void findEmp(const emp ar[], int s);
void sortEmployees(emp ar[], int s);


int main()
{
    const int SIZE = 100;
    emp mAr[SIZE];  // contains all male employees
    emp fAr[SIZE];  // contains all female employees
    int maleCount = 0, femaleCount = 0;

     cout << fixed << setprecision(2);
    
    // Read data from file into mAr and fAr
     cout << "\n------------------------------readData()------------------------------\n";
    readData(mAr, fAr, maleCount, femaleCount, SIZE);
    cout << "There are " << maleCount << " male and " << femaleCount << " female employees.\n" << endl;

    cout << "\n------------------------------printEmployee()------------------------------\n";
    printEmployee(fAr[0]); //prints one female employee

    cout << "\n------------------------------printEmployee()------------------------------\n";
    cout << endl;
    printEmployee(mAr[0]); //prints one male employee

    cout << "\n------------------------------printAllEmp()------------------------------\n";
    printAllEmp(mAr, maleCount); //prints all male employees
    
    cout << "\n------------------------------printAllEmp()------------------------------\n";
    printAllEmp(fAr, femaleCount); // prints all female employees
    cout <<endl;

    cout << "\n------------------------------outfileArray()------------------------------\n";
    outfileArray(mAr, maleCount); //outputs all male employees
    cout <<endl;
    
    cout << "\n------------------------------outfileArray()------------------------------\n";
    outfileArray(fAr, femaleCount); // outputs all female employees
    cout << endl;
    
    cout << "\n------------------------------findOldest()------------------------------\n";
    emp oldest = findOldest(mAr, fAr, maleCount, femaleCount); // outputs oldest employee first name
    cout << endl << oldest.FN << endl << endl; 
    
    cout << "\n------------------------------giveRaise()------------------------------\n";
    giveRaise(5.5, fAr, femaleCount); // will give raise to all female employees
    printAllEmp(fAr, femaleCount); // outputs all female employees
    
    cout << "\n------------------------------giveRaise()------------------------------\n";
    giveRaise(5.0, mAr, maleCount); // will give raise to all male employees
        printAllEmp(mAr, maleCount); // outputs all male employees
    
    cout << "\n------------------------------giveRaiseToOneEmployee()------------------------------\n";
    giveRaiseToOneEmployee(2.0, fAr[1]); // gives raise to the second female employee
         printEmployee(fAr[1]); // outputs second female employee
    
    cout << "\n------------------------------giveRaiseToOneEmployee()------------------------------\n";
    giveRaiseToOneEmployee(50.0, mAr[0]); // gives 50% raise to first male employee
     printEmployee(mAr[0]); //outputs first male employee
    
   
    cout << "\n------------------------------combineArray()------------------------------\n";
    emp allEmp[SIZE * 2]; 
        combineArray(mAr, maleCount, fAr, femaleCount, allEmp); // 
    
    int total = maleCount + femaleCount; // total number of employees
    printAllEmp(allEmp, total);
    
    cout << "\n------------------------------findEmp()------------------------------\n";
    findEmp(allEmp, total); // finds employee first time
    findEmp(allEmp, total); // finds employee second time
    
   
    cout << "\n------------------------------sortEmployees()------------------------------\n";
    sortEmployees(allEmp, total); // sorts all employees
    printAllEmp(allEmp, total); // prints sorted employees
    
    return 0;
}


void readData(emp mAr[], emp fAr[], int& maleCount, int& femaleCount, const int SIZE) {
  ifstream fin("employees.dat");  //filename
    
    if (!fin) {
        cerr << "employees.dat doesn't exist. Terminating the program." << endl;
        exit(1);
    }

    emp temp;
    maleCount = 0;
    femaleCount = 0;

    //read first employee
    fin >> temp.FN >> temp.LN >> temp.gen >> temp.hRate >> temp.ID >> temp.age;
    
    while (fin && maleCount < SIZE && femaleCount < SIZE) {
        if (temp.gen == 'M' || temp.gen == 'm') {
            mAr[maleCount] = temp;
            maleCount++;
        }
        else if (temp.gen == 'F' || temp.gen == 'f') {
            fAr[femaleCount] = temp;
            femaleCount++;
        }
        
        //read next employee
        fin >> temp.FN >> temp.LN >> temp.gen >> temp.hRate >> temp.ID >> temp.age;
    }
    
    fin.close();
}


void printEmployee(const emp& e)
{
  cout << left << setw(10) << e.FN << left << setw(10) <<  e.LN << left << setw(10) <<
  e.gen << left <<setw(10) << e.hRate << left << setw(10) << e.ID << left << setw(10) << e.age << endl;
}




void printAllEmp(const emp arr[], int count)
{
    for (int i = 0; i < count; ++i)
    {
        printEmployee(arr[i]);
    }
}


void outfileArray(const emp tempar[], int count)
{

  string file;

  cout<<"Enter the output file name: ";
  cin >>file;

  ofstream fout;

  fout.open(file);

  for(int i = 0; i < count; i++)
    {

      fout <<tempar[i].LN << ", " << tempar[i].FN<<endl;
    }
					 

}

emp findOldest(const emp m[], const emp f[], int maleCount, int femaleCount)
{
    emp old = m[0]; // start with first male employee

    // check which male employee is oldest
    for (int i = 1; i < maleCount; i++)
    {
        emp temp = m[i];
        if (temp.age > old.age)
            old = temp;
    }

    // check which female employee is oldest
    for (int i = 0; i < femaleCount; i++)
    {
        emp temp = f[i];
        if (temp.age > old.age)
            old = temp;
    }

    return old; // return the whole struct of the oldest employee
}


void giveRaise(double percent, emp e[], int count)
{
    for (int i = 0; i < count; i++)
    {
        e[i].hRate = e[i].hRate + (e[i].hRate * (percent * 0.01));
    }
}




//This function will give a raise to one employee.

void giveRaiseToOneEmployee(double percent, emp &e)
{
    e.hRate = e.hRate + (e.hRate * (percent * 0.01));
}


void combineArray(const emp m[], int maleCount, const emp f[], int femaleCount, emp all[])
{
    for (int i = 0; i < maleCount; i++)
        all[i] = m[i];
    for (int i = 0; i < femaleCount; i++)
        all[i + maleCount] = f[i];
}

// this function finds employee
void findEmp(const emp ar[], int s)
{
    int id; // employee ID number

    cout << "\nEnter the employee id: ";
    cin >> id;

    int i;
    for (i = 0; i < s; i++) // goes through employees
    {
        if (ar[i].ID == id)
        {
            // will print if found
            cout << endl;
            cout << left << setw(10) << ar[i].FN;
            cout << left << setw(10) << ar[i].LN << endl;
            return; // stop the function after printing
        }
    }

    // if loop finishes without finding
    cout << "\nThere is no employee with ID " << id << ".\n";
}


void sortEmployees(emp ar[], int s)
{
    int lrgIndx; 
    emp temp;    

    for (int last = s - 1; last >= 1; last--)
    {
        lrgIndx = 0; 

        for (int i = 1; i <= last; i++)
        {
           
            if (ar[i].FN > ar[lrgIndx].FN)
            {
                lrgIndx = i;
            }
        }

       
        temp = ar[lrgIndx];
        ar[lrgIndx] = ar[last];
        ar[last] = temp;
    }
}
