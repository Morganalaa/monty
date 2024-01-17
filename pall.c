#include "monty.h"

/**
 *  pall - prints stack
 *  @stack: stack by main
 *  @line_cnt:  lines no.
 *  Return: void
 */

void pall(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
print_stack(*stack);
}
