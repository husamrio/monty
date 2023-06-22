#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */

typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */

typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void divide_top_two(stack_t **stack_head, unsigned int counter);
void perform_modulo(stack_t **stack_head, unsigned int counter);
void display_stack(stack_t **stack_head, unsigned int counter);
void print_string(stack_t **stack_head, unsigned int counter);
void rotate_stack_bottom(stack_t **stack_head, __attribute__((unused)) unsigned int counter);
void add_top_two(stack_t **stack_head, unsigned int counter);
int execute_opcode(char *content, stack_t **stack, unsigned int line_num, FILE *file);
void print_char(stack_t **stack_head, unsigned int counter);
void add_node(stack_t **stack_head, unsigned int counter);
void print_top(stack_t **stack_head, unsigned int counter);
void push_node(stack_t **stack_head, int value);
void multiply_top_two(stack_t **stack_head, unsigned int counter);
void free_list(stack_t *stack_head);
void print_top(stack_t **stack_head, unsigned int counter);
void set_queue(stack_t **stack_head, unsigned int counter);
void add_to_queue(stack_t **stack_head, int value);
void subtract_top(stack_t **stack_head, unsigned int counter);
void do_nothing(stack_t **stack_head, unsigned int counter);
void pop_top(stack_t **stack_head, unsigned int counter);
void swap_top(stack_t **stack_head, unsigned int counter);
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
void rotate_left(stack_t **stack_head, __attribute__((unused)) unsigned int counter);
void printst(stack_t **stack_head, unsigned int line_number);
#endif
