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

    - LINEAR SEARCHING--------------
    - In linear searching, the amount required to find the keys in both the best and worst element were as 
        explained in the textbook. When an element was placed at the end, it turned out we needed N steps in truth, 
        when it was placed in the beginning, we needed 1 step, and for the middle, it was exactly the N steps of where the index resided. The time complexity for Linear Searching is O(N).

BINARY SEARCHING--------------
 -For binary search, the only case which it was beaten was when the element was in the beginning. However,
    every other case such as middle or last, it took 1 and 17 steps respectively. According to our textbook, 
    "Searching Algorithms" chapter 4, Binary searching took advantage of the sorted data by splitting the array in half
    if the key wasn't in the middle, reducing time complexity from O(N) to O(log N). We see that here with each iteration.
    After the first step, N/2 remain.
    After the second, N/4 remain and so on.



### Task 5: Write pseudocode for a randomized search algorithm that searches for a given key by randomly selecting indices without repetition. Use a dataset of 100,000 distinct elements, stored in a vector. Each element may be examined at most once during the search. Analyze and state the best-case, average-case, and worst-case time complexities of this algorithm using Big-O notation. Then, implement the algorithm in C++, using only the following standard headers: <vector> for data storage, <random> for random index generation, and <iostream> for input and output. The implementation should track and report the number of comparisons performed during the search. Finally, compare and contrast the randomized search algorithm with linear search and binary search in terms of time complexity, data requirements (such as ordering), and practical efficiency. Discuss scenarios in which each approach may be preferred, highlighting the advantages and limitations of randomized search relative to linear and binary search. - 5 pts

    First part - Pseudocode


        RandomizedSearch(data, key)
    
             unvisited (0, 1, 2, 3,. . . . 99999)      - all indices we haven't checked yet
             steps <- 0

             while unvisited is not empty do

            pick a random index from unvisited
            steps <- steps + 1

             if data[index] equals key then
            return index                        // found

            remove index from unvisited             // so we never check it again

            end while

            return -1                                   // not found


    - Second part- Big O analysis

        Best case- O(1)
            - The key is found on the very first random pick.
            Only one comparison is made regardless of N.

        avg case - O(N)
        -Assuming on average we will only search half of N, N/2 elements are examined 
        once the key is found. So the avg case will be O(N).
    

        Worst case - O(N)
        - Worst case being we check the whole set without repeats, and/or the key not being present,
            every element will be checked at least once. So its O(N)
    - Third part - Code Implementation
        *see code file*

    -Fourth part - Comparison with linear and binary search.