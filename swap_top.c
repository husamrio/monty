#include "monty.h"

/**
 * swap_top -Elements of the stack_head top two swapped
 * @stack_head: pointer to the top
 * @counter: line no of the command executed
 *
 * Return: void
 */
void swap_top(stack_t **stack_head, unsigned int counter)
{
    stack_t *temp;
    int length = 0, value;

    temp = *stack_head;
    while (temp)
    {
        temp = temp->next;
        length++;
    }
    if (length < 2)
    {
        fprintf(stderr, "L%d: can't swap, stack_head too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_list(*stack_head);
        exit(EXIT_FAILURE);
    }
    temp = *stack_head;
    value = temp->n;
    temp->n = temp->next->n;
    temp->next->n = value;
}
