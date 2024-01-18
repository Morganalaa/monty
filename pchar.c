#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * pchar - int print  at the top
 * @stack: main Stack
 * @line_cnt: lines amount 
 * Return: VOID 
 */

void pchar(stack_t **stack, unsigned int line_cnt)
{
if (!stack || !(*stack))
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", line_cnt);
status = EXIT_FAILURE;
return;
}
if (isascii((*stack)->n) == 0)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", line_cnt);
status = EXIT_FAILURE;
return;
}
printf("%c\n", (*stack)->n);
}
