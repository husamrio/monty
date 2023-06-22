#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

ssize_t getline(char **lineptr, size_t *n, FILE *stream) {
    char *line = NULL;
    size_t size = 0;
    int c;
    ssize_t len = 0;
	char *newline = realloc(line, size);
    if (lineptr == NULL || n == NULL || stream == NULL) {
        return -1;
    }

    while ((c = fgetc(stream)) != EOF) {
        if (len >= (ssize_t)size) {
            size = (size == 0) ? 1 : size * 2;
           
            if (newline == NULL) {
                free(line);
                return -1;
            }
            line = newline;
            *lineptr = line;
            *n = size;
        }
        line[len++] = c;
        if (c == '\n') {
            break;
        }
    }

    if (len == 0 || ferror(stream)) {
        free(line);
        return -1;
    }

    line[len] = '\0';
    return len;
}
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - monty bytecode interpreter
* @argc: arguments no.
* @argv: file location of mounty
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		bus.content = content;
		line_number++;
		if (read_line > 0)
		{
			execute_opcode(content, &stack, line_number, file);
		}
		free(content);
	}
	free_list(stack);
	fclose(file);
return (0);
}
