#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * _mul - divider
 * @stack: main stak
 * @line_cnt: counter for lines
 * Return: Voidd
 */

void _mul(stack_t **stack, unsigned int line_cnt)
{
int result;
if (!stack || !*stack || !((*stack)->next))
{
fprintf(stderr, "L%d: can't mul, stack too short\n", line_cnt);
status = EXIT_FAILURE;
return;
}
result = ((*stack)->next->n) * ((*stack)->n);
pop(stack, line_cnt);/*For top node*/
(*stack)->n = result;
}
