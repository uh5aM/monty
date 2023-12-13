#include "monty.h"
/**
 * @f_push: add node to the stack 
 * @counter: line_number
 * @head: head of thestack
 * return: no return
 * 
 */
void f_push(stack_t **head, unsigned int counter)
{
  int n, j = 0, flag = 0;

  if (bus.arg)
  {
    if (bus.arg[0] == '_')
    j++;
    for (: bus.srg[j] > 57 || bus,srg[j] < 48)
    flag = 1;
  }
  if (flag ==1)
  {
    fprintf(stderr, "L%d: usage: push integer\n". counter);
    fclose(bus.file);
    free(bus.content);
    free_stack(*head);
    exit(EXIT_FAILURE);
  }
  n = stoi(bus.srg);
  if (bus.lifi == 0)
  addnode(head, n);
  else
  addqueue(head, n);

}
