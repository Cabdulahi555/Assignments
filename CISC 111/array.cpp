/*****************************************************************************
Cabdulahi Hussein
Prof. Slott
lab array.cpp
03/26/2025
This program will reverse arrays
-- UPDATE 04/10/25 this program will be extended for homework
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

// function declarations
void fillArray(int a[], int s);
void printArray(int a[], int s);
void reverseArray(int a[], int s);
double findAvg(int a[], int s);
int findHighest(int a[], int s);
void doubleArray(int a[], int s);
void showBarGraph(int a[], int s);
void selectionSortAsc(int a[], int s);
void selectionSortDesc(int a[], int s);
int sequentialSearch(int a[], int s, int key);
void showMenu();

int main()
{
    const int SIZE = 5;
    int ar[SIZE];
    int choice;

    // show menu until user chooses to quit
    do
    {
        showMenu();
        cout << "enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                fillArray(ar, SIZE); // fill array with user input
                break;
            case 2:
                printArray(ar, SIZE); // print array
                break;
            case 3:
                reverseArray(ar, SIZE); // reverse array
                break;
            case 4:
                // find and show average
                cout << "average: " << fixed << setprecision(1) << findAvg(ar, SIZE) << endl;
                break;
            case 5:
                // find and show highest
                cout << "highest number: " << findHighest(ar, SIZE) << endl;
                break;
            case 6:
                doubleArray(ar, SIZE); // double values
                break;
            case 7:
                showBarGraph(ar, SIZE); // bar graph output
                break;
            case 8:
                selectionSortAsc(ar, SIZE); // sort ascending
                break;
            case 9:
                selectionSortDesc(ar, SIZE); // sort descending
                break;
            case 10:
            {
                // search for a number
                int key;
                cout << "enter number to search for: ";
                cin >> key;
                int result = sequentialSearch(ar, SIZE, key);
                if (result != -1)
                    cout << key << " was found at index " << result << endl;
                else
                    cout << key << " was not found" << endl;
                break;
            }
            case 13:
                cout << "thank you for using the program" << endl;
                break;
            default:
                cout << "invalid choice" << endl;
        }

    } while (choice != 13);

    return 0;
}

// show menu options
void showMenu()
{
    cout << "-------------------------------------------------------------" << endl;
    cout << "1) fill   2) print   3) reverse   4) average   5) highest" << endl;
    cout << "6) double 7) bar graph   8) sort asc   9) sort desc" << endl;
    cout << "10) search   13) quit" << endl;
    cout << "-------------------------------------------------------------" << endl;
}

// get input from user
void fillArray(int a[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << "please enter a number: ";
        cin >> a[i];
    }
}

// print all numbers in array
void printArray(int a[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << a[i] << endl;
    }
}

// reverse numbers in array
void reverseArray(int a[], int s)
{
    int left = 0;
    int right = s - 1;

    while (left < right)
    {
        int temp = a[left];
        a[left] = a[right];
        a[right] = temp;
        left++;
        right--;
    }
}

// find average of numbers
double findAvg(int a[], int s)
{
    double sum = 0;
    for (int i = 0; i < s; i++)
    {
        sum += a[i];
    }
    return sum / s;
}

// find highest number
int findHighest(int a[], int s)
{
    int highest = a[0];
    for (int i = 1; i < s; i++)
    {
        if (a[i] > highest)
        {
            highest = a[i];
        }
    }
    return highest;
}

// double each number
void doubleArray(int a[], int s)
{
    for (int i = 0; i < s; i++)
    {
        a[i] *= 2;
    }
}

// show bar graph using stars
void showBarGraph(int a[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << "slot " << i << ": ";
        for (int j = 0; j < a[i] / 10; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// sort array in ascending order
void selectionSortAsc(int a[], int s)
{
    for (int i = 0; i < s - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < s; j++)
        {
            if (a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }

        if (minIndex != i)
        {
            int temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
        }
    }
}

// sort array in descending order
void selectionSortDesc(int a[], int s)
{
    for (int i = 0; i < s - 1; i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < s; j++)
        {
            if (a[j] > a[maxIndex])
            {
                maxIndex = j;
            }
        }

        if (maxIndex != i)
        {
            int temp = a[i];
            a[i] = a[maxIndex];
            a[maxIndex] = temp;
        }
    }
}

// search for a number in array
int sequentialSearch(int a[], int s, int key)
{
    for (int i = 0; i < s; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }
    return -1;
}

