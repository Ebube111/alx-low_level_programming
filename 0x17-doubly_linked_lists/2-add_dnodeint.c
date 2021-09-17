#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the pointer of the first node
 * @n: new data to be assigned to new node
 * Return:  address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t *new = malloc(sizeof(dlistint_t));

  if (new == NULL)
    {
      return (NULL);
    }

  new->n = n;
  new->next = *head;
  *head = new;
  return (new);
}
