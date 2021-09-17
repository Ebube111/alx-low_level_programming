#include "lists.h"
#include <stdio.h>

/**
 *dlistint_len - returns number of elements/nodes
 *@h: pointer to the first node
 *Return:  number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
  const dlistint_t *ptr;
  size_t nodes = 0;

  ptr = h;
  size_t n;

  while (ptr != NULL)
    {
      nodes += 1;
      ptr = ptr->next;
    }



  return (nodes);
}
