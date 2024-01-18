#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * opcode - function
 * @stack: main stack 
 * @str: compare of strings 
 * @line_cn:  lines ammount 
 * Return: N|A
 */

void opcode(stack_t **stack, char *str, unsigned int line_cnt)
{
int i = 0;
instruction_t op[] = INSTRUCTIONS;
if (!strcmp(str, "stack"))
{
global.data_struct = 1;
return;
}
if (!strcmp(str, "queue"))
{
global.data_struct = 0;
return;
}	
while (op[i].opcode)
{
if (strcmp(op[i].opcode, str) == 0)
{
op[i].f(stack, line_cnt);
return; /* if we found a match, run the function */
}
i++;
}
fprintf(stderr, "L%d: unknown instruction %s\n", line_cnt, str);
status = EXIT_FAILURE;
}
