# 0x19. C - Stacks, Queues - LIFO, FIFO
# C
# Group project
# Algorithm
# Data structure
# Resources
## Read or watch:

## Google
 * How do I use extern to share variables between source files in C?
 * Stacks and Queues in C
 * Stack operations
 * Queue operations
## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
 * What do LIFO and FIFO mean
 * What is a stack, and when to use it
 * What is a queue, and when to use it
 * What are the common implementations of stacks and queues
 * What are the most common use cases of stacks and queues
 * What is the proper way to use global variables
## Compilation & Output
 * Your code will be compiled this way:
$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
* Any output must be printed on stdout
* Any error message must be printed on stderr
* Here is a link to a GitHub repository that could help you making sure your errors are printed on stderr
## Tests
We strongly encourage you to work all together on a set of tests

## The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

## Monty byte code files

Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:
