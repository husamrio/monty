#include "monty.h"

/**
 * add_node - The stack_head gets added on to
 * @stack_head: _headstack_head head
 * @counter: line no.
 * Return: None
*/
void add_node(stack_t **stack_head, unsigned int counter)
{
	int num, i = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (; bus.arg[i] != '\0'; i++)
		{
			if (bus.arg[i] > 57 || bus.arg[i] < 48)
				flag = 1; }
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_list(*stack_head);
			exit(EXIT_FAILURE); }}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_list(*stack_head);
		exit(EXIT_FAILURE); }
	num = atoi(bus.arg);
	if (bus.lifi == 0)
		push_node(stack_head, num);
	else
		add_to_queue(stack_head, num);
}
