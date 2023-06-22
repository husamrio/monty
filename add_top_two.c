#include "monty.h"

/**
* add_top_two - Adds the top two elements of the stack_head.
* @stack_head: Pointer to the stack_head head.
* @counter: Line no.
* Return: No return.
*/
void add_top_two(stack_t **stack_head, unsigned int counter)
{
stack_t *temp;
int length = 0, sum;

temp = *stack_head;
while (temp)
{
temp = temp->next;
length++;
}
if (length < 2)
{
fprintf(stderr, "L%d: can't add, stack_head too short\n", counter);
fclose(bus.file);
free(bus.content);
free_list(*stack_head);
exit(EXIT_FAILURE);
}
temp = *stack_head;
sum = temp->n + temp->next->n;
temp->next->n = sum;
*stack_head = temp->next;
free(temp);
}
