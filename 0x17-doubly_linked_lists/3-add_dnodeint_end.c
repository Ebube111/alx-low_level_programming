#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - adds new node at end of list
 * @head: pointer to the header
 * @n: value to be assigned to new node
 * Return:  address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
  dlistint_t *new = malloc(sizeof(dlistint_t));
  dlistint_t *last = *head;

  if (new == NULL)
    {
      return (NULL);
    }

  new->n = n;
  new->next = NULL;
  while (last->next != NULL)
    {
      last = last->next;
      last->next = new;
    }

  return (new);

}
