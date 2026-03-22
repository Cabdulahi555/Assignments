# Reflection Questions

Answer the following questions in your README.

1. Why is a linked list efficient for stack implementation?
  A. It grows and shrinks depending on the needs of the user. No set size.
2. What is the time complexity of push and pop operations?
  A. We don't travel the whole list, so O(1).
3. What happens if memory is not deallocated after pop?
  A. Memory leak.
4. Compare a stack implemented with an array versus a linked list.
  A. Stacks with an array have set sizes and risk overflow while also limiting uses to only what the size provided is. Linked list grows dynamically so it's much more versatile.
