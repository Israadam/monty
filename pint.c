#include "monty.h"
/**
 * f_pint - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void pint(int line_number) {
  if (stack_size == 0) {
    fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
    exit(EXIT_FAILURE);
  }

  int top_element = stack[stack_size - 1];
  printf("%d\n", top_element);
}

