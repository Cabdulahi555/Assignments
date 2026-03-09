# Week 5 Hash final analysis

This week because we are coding quite a bit, I'll upload the file and simply add my paragraph analysis to the MD file.
    
-   Final Analysis:-
    The hash table performed well across 4 of the tests. Both random and sequential keys both had a load factor of 0.50
    showing the hash table distributes evenly regardless of input type. The most interesting result however was that the same prefix tests which produced 0 collisions,
    each key had enough unique characters for the hash function to place them all in seperate buckets. Below attatched will by my output. 

-   PS C:\Users\abdul\Desktop\VS\Assignments\CISC187\week-5> g++ .\hash.cpp
    PS C:\Users\abdul\Desktop\VS\Assignments\CISC187\week-5> ./a.exe
    Test 1 -- Insert 100 Random Strings

    Hash Table
    -------------------
    Capacity    : 197
    Elements    : 100
    Load factor : 0.507614
    Collisions  : 20
    Max bucket  : 3
    Avg bucket  : 1.25
    -------------------

    search("skpiyx") => 1
    search("notinhere") => NOT FOUND

    remove("skpiyx") => removed
    remove("gxifsg") => removed
    remove("xzjvee") => removed

    verify("skpiyx") => NOT FOUND (correct)
    verify("gxifsg") => NOT FOUND (correct)
    verify("xzjvee") => NOT FOUND (correct)

    Test 2 -- Random Strings (n=200)

    Hash Table
    -------------------
    Capacity    : 397
    Elements    : 200
    Load factor : 0.503778
    Collisions  : 39
    Max bucket  : 3
    Avg bucket  : 1.24224
    -------------------

    Test 3 -- Sequential Keys (n=200)

    Hash Table
    -------------------
    Capacity    : 397
    Elements    : 200
    Load factor : 0.503778
    Collisions  : 42
    Max bucket  : 2
    Avg bucket  : 1.26582
    -------------------

    Test 4 -- Same-Prefix Keys (n=200)

    Hash Table
    -------------------
    Capacity    : 397
    Elements    : 200
    Load factor : 0.503778
    Collisions  : 0
    Max bucket  : 1
    Avg bucket  : 1
    -------------------

    PS C:\Users\abdul\Desktop\VS\Assignments\CISC187\week-5> 