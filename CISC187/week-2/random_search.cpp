/*

Cabdulahi Hussein
Prof. Danish Khan
Assignment 2 - random_search.cpp
Purpose: I will implement a randomized search algorithm, analyze its
time complexity, and finally compare it with linear and binary search.
*/

#include <iostream>
#include <vector>
#include <random>
using namespace std;


//Purpose; We will be finding where a specific key is located
    //one by one and return the index where the key was found
//Parameters; 'data' contains our values, 'key' is the value we're looking for,
    // 'steps' tracks the steps taken and is passed by referenced.

int rand_search(vector<int> data, int key, int &steps)
{
    //unvisited from 0 to 99999
    vector<int> unvisited;
        for (int i = 0; i < data.size(); i++)
            unvisited.push_back(i);

    //steps recorded
    steps = 0;

    //random number generator
    random_device rd;

    //while unvisited isnt empty, do

    while(!unvisited.empty())
        {
            uniform_int_distribution<int> dist(0, unvisited.size() - 1);
            int rand_pos = dist(rd);
            int index = unvisited[rand_pos];

            steps = steps +1;

            //if data[index] is key
            if(data[index] == key)
                {
                    return index;

                }
                //remove the index from the unvisited
                unvisited.erase(unvisited.begin() + rand_pos);
        }
        //worst case scenario, not found
        return -1;

}

int main()
{   
    //limit as required by prof. 
    const int n = 100000;

    //building the vector
    vector<int> data(n);
        for (int i = 0; i < n; i++)
        {
            data[i] = i + 1;
        }

        int steps = 0;

    //First test; search last element
     cout <<" \t- Searching for 100000 -" << endl;
     int index = rand_search(data, 100000, steps);
    cout <<"Found at the index " << index << ". Steps: " << steps << endl;

    //Second test; search for first element
    cout<<"\t- Searching for 1 -" << endl;
    index = rand_search(data, 1, steps);
        cout << "Found at the index " << index << ". Steps: "<< steps << endl;

    //Third test; Searching for middle element
    cout <<"\t- Searching for 50000 - " << endl;
    index = rand_search(data, 50000, steps);
        cout <<"Found at the index " << index <<". Steps: " << steps << endl;

    //Fourth test: not in dataset
    cout <<"\t- Searching for 999999 (999,999 not in data set) -" << endl;
    index = rand_search(data, 999999, steps);
        cout <<"Not found. \n\t Steps: " << steps << endl;

}
/*
    My output for this file was as such:-
 PS C:\Users\abdul\Desktop\VS\Assignments\CISC187\week-2> g++ .\random_search.cpp
PS C:\Users\abdul\Desktop\VS\Assignments\CISC187\week-2> ./a.exe
        - Searching for 100000 -
Found at the index 99999. Steps: 44815
        - Searching for 1 -
Found at the index 0. Steps: 82664
        - Searching for 50000 - 
Found at the index 49999. Steps: 16041
        - Searching for 999999 (999,999 not in data set) -
Not found. 
         Steps: 100000
PS C:\Users\abdul\Desktop\VS\Assignments\CISC187\week-2> 
*/