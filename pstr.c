#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pstr - prints contents
 * @stack: main stack
 * @line_cnt: Counter for Lines
 * Return: N\A
 */

void pstr(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
stack_t *current = *stack;
while (current)
{
if (current->n <= 0 || current->n > 127)
break;
putchar((char) current->n);
current = current->next;
}
putchar('\n');
}
