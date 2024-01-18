#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "monty.h"
/**
 * error_usage - usage message printing
 * Return: N/A
 */
void error_usage(void)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
/**
 * file_error - file error message printing
 * @argv: manin argv
 * Return: N\A
 */
void file_error(char *argv)
{
fprintf(stderr, "Error: Can't open file %s\n", argv);
exit(EXIT_FAILURE);
}
int status = 0;
/**
 * main - enter point
 * @argv: arguments passed list
 * @argc: args amounts
 * Return: N\A
 */
int main(int argc, char **argv)
{
FILE *file;
size_t buf_len = 0;
char *buffer = NULL;
char *str = NULL;
stack_t *stack = NULL;
unsigned int line_cnt = 1;
global.data_struct = 1;
if (argc != 2)
error_usage();
file = fopen(argv[1], "r");
if (!file)
file_error(argv[1]);
while (getline(&buffer, &buf_len, file) != -1)
{
if (status)
break;
if (*buffer == '\n')
{
line_cnt++;
continue;
}
str = strtok(buffer, " \t\n");
if (!str || *str == '#')
{
line_cnt++;
continue;
}
global.argument = strtok(NULL, " \t\n");
opcode(&stack, str, line_cnt);
line_cnt++;
}
free(buffer);
free_stack(stack);
fclose(file);
exit(status);
}
