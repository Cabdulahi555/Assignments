/* ----------------------------------------------
Cabdulahi Hussein
Prof. Danish Khan
Assignment 7

 ----------------------------------------------- */
#include <iostream>
#include "stack.h"
using namespace std;

//Driver Program
// PURPOSE: Test all stack operations and verify expected output
int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.display();

    s.pop();

    cout << "Top element: " << s.peek() << endl;

    s.display();

    return 0;
}