# Cabdulahi Hussein
# Prof. Alzate
# Programming assignment 2
# Purpose: Demonstrating previous modules understanding


# Task1 Write a function congruent_mod(b, n, lower, upper) that will return the integers as a list, array, or
        # vector (depending on your programming language) between (inclusive) lower and upper that are congruent
        # to b mod n
def congruent_mod(b, n, lower, upper):
    return [i for i in range(lower, upper + 1) if i % n == b % n]


# Task2 Write a function divisors(x) that returns the divisors of an integer x as a list, array, vector (depending on
        # your programming language)
def divisors(x):
    x = abs(x)
    return [i for i in range(1, x + 1) if x % i == 0]


# Task3 Write a function greatest_common_divisor(a,b) that takes integer inputs a and b and returns the greatest
        # common divisor of a and b. Your code must use the function divisors() from Task 2.
def greatest_common_divisor(a, b):
    common = [d for d in divisors(a) if d in divisors(b)]
    return max(common)


# Task4 Write a function multiplicative_inverse(a, b, n) that will return True if a and b are multiplicative
        # inverses mod n and return False otherwise.

def multiplicative_inverse(a, b, n):
    return (a * b) % n == 1


# Task5 Write a function relatively_prime(a,b) that takes two integers a and b and returns True if the integers
        # a and b are coprime and False otherwise.
        # Your function must use the functions you wrote in Task 2 and Task 3
def relatively_prime(a, b):
    return greatest_common_divisor(a, b) == 1


# Task6a Learn about the Euclidean algorithm and how it works, what it does, what it’s efficiency is, number of
        # recursive calls, etc. and write about which Tasks it could’ve been used in for this programming Assignment

        #See attatched


# Task6b Rewrite your code for Task 5 using the Euclidean algorithm as a subroutine. Will only be graded if Task 6
        # Part a. is completed
def gcd_euclidean(a, b):
    a, b = abs(a), abs(b)
    while b != 0:
        a, b = b, a % b
    return a

def relatively_prime_euclidean(a, b):
    return gcd_euclidean(a, b) == 1


# Task7 Write a function move_over_encrypt(word, key) that takes a String input word and integer value key and
        # returns the word encrypted using the move over encryption method you learned about in M4.

def move_over_encrypt(word, key):
    n = len(word)
    return ''.join(word[(i - key) % n] for i in range(n))


# Task8 Write a function skip_ahead_encrypt(word, key) that takes a String input word and integer value key
        # and returns the word encrypted using the skip ahead encryption method you learned 

def skip_ahead_encrypt(word, key):
    n = len(word)
    result = [''] * n
    for i in range(n):
        result[(i * key) % n] = word[i]
    return ''.join(result)


# Test Cases
print(congruent_mod(1, 9, -8, 35))
print(congruent_mod(2, 5, -20, 7))
print(divisors(20))
print(divisors(17))
print(greatest_common_divisor(33, 6))
print(greatest_common_divisor(10, 7))
print(multiplicative_inverse(10, 2, 4))
print(multiplicative_inverse(10, 5, 7))
print(relatively_prime(10, 7))
print(relatively_prime(12, 8))
print(relatively_prime_euclidean(10, 7))
print(relatively_prime_euclidean(12, 8))
print(move_over_encrypt('CODE', 2))
print(skip_ahead_encrypt('CHECKFLAG', 2))