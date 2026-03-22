/* ----------------------------------------------
Cabdulahi Hussein
Prof. Danish Khan
Assignment 7
 Implementation of all Stack member functions
 ----------------------------------------------- */
#ifndef STACK_H
#define STACK_H

// Part 1: Node Structure
// Each node stores data and a pointer to the next node
struct Node
{
    int data;
    Node* next;
};

// Part 2: Stack Class
class Stack
{
private:
    Node* top;

public:
    Stack();

    void push(int value);
    void pop();
    int peek();
    bool isEmpty();
    void display();
};

#endif