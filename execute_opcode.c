#include "monty.h"

/**
* execute_opcode - Executes the given opcode.
* @content: The line content.
* @stack: Head linked list - stack.
* @line_num: Line number.
* @file: Pointer to monty file.
*
* Return: No return.
*/
int execute_opcode(char *content, stack_t **stack, unsigned int line_num, FILE *file)
{
instruction_t opcodes[] = {
{"push", add_node}, {"pall", display_stack}, {"pint", printst},
{"pop", pop_top},
{"swap", swap_top},
{"add", add_top_two},
{"nop", do_nothing},
{"sub", subtract_top},
{"div", divide_top_two},
{"mul", multiply_top_two},
{"mod", perform_modulo},
{"pchar", print_char},
{"pstr", print_string},
{"rotl", rotate_left},
{"rotr", rotate_stack_bottom},
{"queue", set_queue},
{"stack", print_top},
{NULL, NULL}
};
unsigned int i = 0;
char *opcode;

opcode = strtok(content, " \n\t");
if (opcode && opcode[0] == '#')
return (0);

bus.arg = strtok(NULL, " \n\t");
while (opcodes[i].opcode && opcode)
{
if (strcmp(opcode, opcodes[i].opcode) == 0)
{
opcodes[i].f(stack, line_num);
return (0);
}
i++;
}

if (opcode && opcodes[i].opcode == NULL)
{
fprintf(stderr, "L%d: unknown instruction %s\n", line_num, opcode);
fclose(file);
free(content);
free_list(*stack);
exit(EXIT_FAILURE);
}

return (1);
}
