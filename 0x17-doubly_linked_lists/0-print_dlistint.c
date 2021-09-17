#include "lists.h"
#include <stdio.h>

/**
 *print_dlistint - prints all the elements of a dlistint_t list.
 *@h: pointer to the first node
 *Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
  const dlistint_t *ptr;
  size_t nodes = 0;

  ptr = h;
  size_t n;

  while (ptr != NULL)
    {
      printf("%d\n", ptr->n);
      ptr = ptr->next;
      nodes += 1;
    }



  return (nodes);
}
