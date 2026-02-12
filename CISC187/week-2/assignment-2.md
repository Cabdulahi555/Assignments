# Linear and Binary Search

## Video Link

### Task 1: How many steps would it take to perform a linear search for the number 8 in the ordered array, [2, 4, 6, 8, 10, 12, 13]? - 1 pt
    - The search would start from the first index, which is 2, then continue to the 4th index which is our desired number 8, then stop. So 4 steps, for indexes 0 - 3.

### Task 2: How many steps would binary search take for the previous example? - 1 pt
    - L= index 0 R = index 6
            Middle = (0+6)/2 = 3
    Index 3 contains 8, so one step.


### Task 3: What is the maximum number of steps it would take to perform a binary search on an array of size 100,000? - 1 pt
    - log2(100,000) = 17. Just 17 steps.


    
### Task 4: Write a C++ program that implements both linear search and binary search algorithms using an array of 100,000 elements. The program should record and report the number of steps (comparisons) performed during each search operation. In addition, analyze and justify the observed behavior by providing a theoretical explanation using Big-O notation, demonstrating why linear search exhibits O(N) complexity and binary search exhibits O(logN)complexity. - 2 pts


### Task 5: Write pseudocode for a randomized search algorithm that searches for a given key by randomly selecting indices without repetition. Use a dataset of 100,000 distinct elements, stored in a vector. Each element may be examined at most once during the search. Analyze and state the best-case, average-case, and worst-case time complexities of this algorithm using Big-O notation. Then, implement the algorithm in C++, using only the following standard headers: <vector> for data storage, <random> for random index generation, and <iostream> for input and output. The implementation should track and report the number of comparisons performed during the search. Finally, compare and contrast the randomized search algorithm with linear search and binary search in terms of time complexity, data requirements (such as ordering), and practical efficiency. Discuss scenarios in which each approach may be preferred, highlighting the advantages and limitations of randomized search relative to linear and binary search. - 5 pts