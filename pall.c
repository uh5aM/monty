#include "monty.h"
/**
 * @f_pall: print the stacj
 *@head: head of the stack
 @counter: no used
 return:  nothing 
 * 
 */
void f_pall(stack_t **head, unsigned int counter)
{
  stack_t *h;
  (void) counter;

  h = *head;
  if (h == NULL)
  return;

  while (h)
  {
    printf("%d\n", h->n);
    h = h->next;
  }
}
