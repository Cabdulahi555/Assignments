#include <iostream>
#include <cstring> // for strcpy
using namespace std;

const int SIZE = 26; // letters in alphabet
const int MAX = 30;  // 29 characters plus null terminator
typedef char cstr[MAX]; // cstr is an alias

struct letter
{
    int freq;
    // char longest[max]
    cstr longest;
    cstr shortest;
};

// Function prototype
void initializeArray(letter ar[]);

int main()
{
    letter ar[SIZE];
    initializeArray(ar);
    cout << ar[0].freq << endl;
    cout << "." << ar[0].longest << ":" << endl;
    cout << "." << ar[0].shortest << ":" << endl;

    return 0;
}

// Initialize frequency to 0, longest to empty string, and shortest to max-length dummy
void initializeArray(letter ar[])
{
    for (int i = 0; i < SIZE; i++)
    {
        ar[i].freq = 0;
        strcpy(ar[i].longest, ""); // no longest word yet
        strcpy(ar[i].shortest, "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx"); // 29 x's as placeholder
    }
}
