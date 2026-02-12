# Array data structure

## This is my week-1 assignment-1 for CISC187 with prof Danish Khan

## Youtube Link
https://youtu.be/8nC7XIkkyjY

### Question 1
Explain how to create an array of 100 elements. You can choose any data type of your choice. (requires C++ code) - 1 pts
  -  We can initialize an array, with a name of our chooseing, to hold 100 elements. Ex. below
```C++
#include <iostream>
using namespace std;
int main()
{
int arr[100];
//or
int numbers[100];
}
```
### Question 2
What will be the size of each element of an array. (requires C++ code) - 1 pts
  -   The size of the array will depend on the how much elements our array holds. For ex. my array of 100 will hold 100 elements. 
  ```C++
  #include <iostream>
using namespace std;

int main()
{
    int arr[100];
    
    // filling up
    for(int i = 0; i < 100; i++) {
        arr[i] = i + 1;
    }
    
    // displaying
    cout << "displaying all 100 elements:" << endl;
    for(int i = 0; i < 100; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}

```
This will fill up our array, and output all elemts, 100 total.

Size for each element of the array will depend on which data type we decide to use. In my instance, the int will hold 4 bytes every element.

### Question 3
For an array containing 100 elements, provide the number of steps the following operations would take: (theoretical) - 6 pts

Reading
  - Regardless of the number of elements in an array N, the read operation will always be 1.

Searching for a value not contained within the array
  - For example, if the element is at index 0, then it would take only a single step. If the element is at the last index, then it would take N steps.

Insertion at the beginning of the array
  - If the array size is 100, it would take 100 steps to shift and 1 step to insert an element, or better say N+1 steps; where N is the number of elements. The constant 1 is the step to add an element.

Insertion at the end of the array
  - if the insertion takes place at the end of the array, then the compiler/interpreter would increase the size of an array and allocate a memory address. The step needed to add an element at the end of an array is 1.

Deletion at the beginning of the array
  -  if the deletion happens at index 0, then one step for deletion and N-1 steps to shift the elements in an array. For example, if an array size is 100, one step for deletion and 99 steps to shift elements in an array, which gives a total of N steps.

Deletion at the end of the array
  - If the deletion happens at the last index, there is no need to shift elements in an array. It would take just one step to perform the deletion.
 ### Question 4
Normally the search operation in an array looks for the first instance of a given value. But sometimes we may want to look for every instance of a given value. For example, say we want to count how many times the value “apple” is found inside an array. How many steps would it take to find all the “apples”? Give your answer in terms of N. (theoretical) - 1 pts
  - Regardless of how many apples we come across, we will still need to search the whoel arrray. SO going by the textbook for search operations, which assume the worst case being the word is at the end, we will have the worst case, so N.
### Questoin 5  
Research how to find the memory address of an array. You can use any programming language of your choice. (requires code) 1 pts
  - Once we create the array, and we don't initialize it with an element to store, we can simply output the array itself to find its address memory.
 ```C++
    #include <iostream>
using namespace std;

int main()
{
    int arr[100];
    
    cout << arr << endl;
    
    return 0;
}
```
  on my computer, the output was as such
   
      PS C:\Users\abdul\Desktop\VS\CS187> ./a.exe
    -  0x8b271ff920
