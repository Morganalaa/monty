#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * pint - data print 
 * @stack: main stack 
 * @line_cnt: lines Amount 
 * Return: VOID
 */

void pint(stack_t **stack, unsigned int line_cnt)
{
if (!stack || !(*stack))
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_cnt);
status = EXIT_FAILURE;
return;
}
printf("%d\n", (*stack)->n);
}
