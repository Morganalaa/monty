#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 *  _div - divides top value by top value
 *  @stack: stackby main
 *  @line_cnt: line no.
 *  Return: void
 */

void _div(stack_t **stack, unsigned int line_cnt)
{
int result;
if (!stack || !*stack || !((*stack)->next))
{
fprintf(stderr, "L%d: can't div, stack too short\n", line_cnt);
status = EXIT_FAILURE;
return;
}
if (((*stack)->n) == 0)
{
fprintf(stderr, "L%d: division by zero\n", line_cnt);
status = EXIT_FAILURE;
return;
}
result = ((*stack)->next->n) / ((*stack)->n);
pop(stack, line_cnt);/*For top node*/
(*stack)->n = result;
}
