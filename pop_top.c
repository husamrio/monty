#include "monty.h"

/**
 * pop_top - removes the top element of the stack_head
 * @stack_head: pointer to the top of the stack_head
 * @counter: line number of the command being executed
 *
 * Return: void
 */
void pop_top(stack_t **stack_head, unsigned int counter)
{
    stack_t *temp;

    if (*stack_head == NULL)
    {
        fprintf(stderr, "L%d: can't pop an empty stack_head\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_list(*stack_head);
        exit(EXIT_FAILURE);
    }
    temp = *stack_head;
    *stack_head = temp->next;
    free(temp);
}
